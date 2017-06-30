#include "maze.h"

/**
 * checkRayDir - function that checks rayDir for raycasting
 * @step: direction of move
 * @mapPos: player coord
 * @sideDist: distance to the next grid
 * @deltaDist: diagonal distance between two grids
 * @rayPos: ray's position
 * @rayDir: ray's direction
 **/
void checkRayDir(intCoord *step, intCoord mapPos, coord *sideDist,
		 coord deltaDist, coord rayPos, coord rayDir)
{
	if (rayDir.x < 0)
	{
		step->x = -1;
		sideDist->x = (rayPos.x - mapPos.x) * deltaDist.x;
	}
	else
	{
		step->x = 1;
		sideDist->x = (mapPos.x + 1.0 - rayPos.x) * deltaDist.x;
	}
	if (rayDir.y < 0)
	{
		step->y = -1;
		sideDist->y = (rayPos.y - mapPos.y) * deltaDist.y;
	}
	else
	{
		step->y = 1;
		sideDist->y = (mapPos.y + 1 - rayPos.y) * deltaDist.y;
	}
}

/**
 * getWall - function to obtain wallDist and hit value
 * @map: the 2D array of the map
 * @mapPos: position on the map
 * @step: direction to move
 * @sideDist: distance to next grid
 * @deltaDist: diagonal distance to between 2 grid
 * @rayDir: direction of the ray
 * @rayPos: position of the ray
 * @hit: counter for whether a wall was hit
 * Return: (double)distance from the wall
 **/
double getWall(char **map, intCoord *mapPos, intCoord *step, coord *sideDist,
	       coord *deltaDist, coord *rayDir, coord *rayPos, int *hit)
{
	double wallDist;
	int wall = 0;

	while (wall == 0)
	{
		if (sideDist->x < sideDist->y)
		{
			sideDist->x += deltaDist->x;
			mapPos->x += step->x;
			*hit = 0;
		}
		else
		{
			sideDist->y += deltaDist->y;
			mapPos->y += step->y;
			*hit = 1;
		}
		if (map[mapPos->x][mapPos->y] > '0')
			wall = 1;
	}
	if (*hit == 0)
		wallDist = (mapPos->x - rayPos->x + (1 - step->x) / 2) / rayDir->x;
	else
		wallDist = (mapPos->y - rayPos->y + (1 - step->y) / 2) / rayDir->y;
	return (wallDist);
}

/**
 * wallColor - function that determines which color is shown per wall
 * @rc: the SDL window/renderer info
 * @map: the 2D array map info
 * @mapPos: current position on the map
 * @hit: an int telling whether or not a wall was hit, and what kind it was
 */
void wallColor(SDL_Instance rc, char **map, intCoord mapPos, int hit)
{
	if (map[mapPos.x][mapPos.y] == '1')
	{
		if (hit == 0)
			SDL_SetRenderDrawColor(rc.renderer, 0x55, 0x55, 0x55, 0xff);
		else
			SDL_SetRenderDrawColor(rc.renderer, 0x88, 0x88, 0x88, 0xff);
	}
}

/**
 * drawWalls - raycasting math for determing walls
 * @map: the 2D array map info
 * @rc: the SDL window/renderer info
 * @pos: current position on the map
 * @dir: current direction of the player
 * @plane: the player's camera plane / field of view
 * @i: current position along screenWidth
 **/
void drawWalls(char **map, SDL_Instance rc, coord pos, coord dir,
	       coord plane, int i)
{
	coord rayPos, rayDir, sideDist, deltaDist;
	double wallDist, camAngle;
	intCoord mapPos, step;
	int wallHeight, blockStart, blockEnd, hit;

	hit = 0;
	camAngle = 2 * i / (double)screenWidth - 1;
	rayPos.x = pos.x;
	rayPos.y = pos.y;
	rayDir.x = dir.x + plane.x * camAngle;
	rayDir.y = dir.y + plane.y * camAngle;
	mapPos.x = (int)rayPos.x;
	mapPos.y = (int)rayPos.y;
	deltaDist.x = sqrt(1 + (rayDir.y * rayDir.y) / (rayDir.x * rayDir.x));
	deltaDist.y = sqrt(1 + (rayDir.x * rayDir.x) / (rayDir.y * rayDir.y));
	checkRayDir(&step, mapPos, &sideDist, deltaDist, rayPos, rayDir);
	wallDist = getWall(map, &mapPos, &step, &sideDist, &deltaDist,
			       &rayDir, &rayPos, &hit);
	wallHeight = (int)(screenHeight / wallDist);
	blockStart = -wallHeight / 2 + screenHeight / 2;
	if (blockStart < 0)
		blockStart = 0;
	blockEnd = wallHeight / 2 + screenHeight / 2;
	if (blockEnd >= screenHeight)
		blockEnd = screenHeight - 1;
	wallColor(rc, map, mapPos, hit);
	SDL_RenderDrawLine(rc.renderer, i, blockStart, i, blockEnd);
}

/**
 * draw - function that begins drawing the maze
 * @rc: the SDL window/renderer info
 * @map: a 2D array of the map
 * @pos: current position
 * @dir: current direction
 * @plane: current field of view
 * @file: the name of the map file
 * @keyPress: the struct of collected key presses
 * @bombMap: 2D array of the bomb's map
 **/
void draw(SDL_Instance rc, char **map, coord pos, coord dir,
	  coord plane, char *file, keys keyPress)
{
	size_t i;


	for (i = 0; i < screenWidth; i++)
	{
		SDL_SetRenderDrawColor(rc.renderer, 0x00, 0xff, 0xff, 0xff);
		SDL_RenderDrawLine(rc.renderer, i, 0, i, screenHeight / 2);
		SDL_SetRenderDrawColor(rc.renderer, 0x4f, 0x79, 0x42, 0xff);
		SDL_RenderDrawLine(rc.renderer, i, screenHeight / 2, i,
				   screenHeight);
		drawWalls(map, rc, pos, dir, plane, i);
	}
	if (keyPress.m)
	{
		minimapFOV(&rc, pos, dir, plane);
		drawMinimap(&rc, map, file);
	}
	SDL_RenderPresent(rc.renderer);
}
