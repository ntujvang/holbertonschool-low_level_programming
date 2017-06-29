#include "maze.h"

/**
 * minimapFOV - function that draws the 2 lines for character field of view
 * @rc: struct that contains all SDL info
 * @pos: player's position
 * @dir: player's direction vector
 * @plane: player's field of view
 **/
void minimapFOV(SDL_Instance *rc, coord pos, coord dir, coord plane)
{
	SDL_Rect target = { screenWidth - 100,
			    screenHeight - 100, 75, 75};

	coord end1, end2;

	end1.x = (dir.x + plane.x) * 6 + pos.x;
	end1.y = (dir.y + plane.y) * 6 + pos.y;
	end2.x = (dir.x + (plane.x * -1)) * 6 + pos.x;
	end2.y = (dir.y + (plane.y * -1)) * 6 + pos.y;
	SDL_SetRenderTarget(rc->renderer, rc->texture);
	SDL_RenderClear(rc->renderer);
	SDL_RenderCopy(rc->renderer, rc->minimap, NULL, NULL);
	SDL_SetRenderDrawColor(rc->renderer, 0xf8, 0xf4, 0xff, 0xff);
	SDL_RenderDrawLine(rc->renderer, pos.x + 1, pos.y + 1,
			   end1.x + 1, end1.y + 1);
	SDL_RenderDrawLine(rc->renderer, pos.x + 1, pos.y + 1,
			   end2.x + 1, end2.y + 1);
	SDL_SetRenderDrawColor(rc->renderer, 0x00, 0xff, 0x00, 0xff);
	SDL_RenderDrawPoint(rc->renderer, pos.x + 1, pos.y + 1);
	SDL_SetRenderTarget(rc->renderer, NULL);
	SDL_RenderCopy(rc->renderer, rc->texture, NULL, &target);
}

/**
 * drawMinimap - function that draws the minimap
 * @rc: structure that contains all SDL info
 * @bombMap: 2D array of map
 * @file: name of map's file
 **/
void drawMinimap(SDL_Instance *rc, char **bombMap, char *file)
{
	FILE *maze;
	char *line;
	size_t charCount, buffsize, i, j;
	ssize_t reader;

	line = NULL;
	reader = i = 0;
	SDL_SetRenderTarget(rc->renderer, rc->minimap);
	SDL_SetRenderDrawColor(rc->renderer, 0x66, 0x66, 0x66, 0xff);
	SDL_RenderClear(rc->renderer);
	SDL_SetRenderDrawColor(rc->renderer, 0x33, 0x55, 0x99, 0xff);
	maze = fopen(file, "r");
	if (maze == NULL)
		return;
	reader = getline(&line, &buffsize, maze);
	while (reader != -1)
	{
		charCount = charCounter(line);
		for (j = 0; j < charCount; j++)
		{
			if (bombMap[i][j] == '1')
			{
				SDL_SetRenderDrawColor(rc->renderer, 0x33, 0x55, 0x99, 0xff);
				SDL_RenderDrawPoint(rc->renderer, i + 1, j + 1);
			}
			if (bombMap[i][j] == 'd')
			{
				SDL_SetRenderDrawColor(rc->renderer, 0xff, 0x00, 0x00, 0xff);
				SDL_RenderDrawPoint(rc->renderer, i + 1, j + 1);
			}
		}
		i++;
		reader = getline(&line, &buffsize, maze);
	}
	fclose(maze);
	free(line);
	SDL_SetRenderTarget(rc->renderer, NULL);
}
