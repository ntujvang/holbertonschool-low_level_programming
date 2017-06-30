#include "maze.h"

/**
 * makeBomb - function that turns 1% of map tiles into bombs as long as
 *            they are not walls
 * @bombMap: a duplicate of the map
 * @file: the name of the maze's file
 **/
void makeBomb(char **bombMap, char *file)
{
	size_t i, n, lineCount, charCount;
	int x, y;

	i = 0;
	lineCount = lineCounter(file);
	charCount = bigLine(file);
	n = lineCount * charCount * .01;
	srand(time(NULL));
	while (i < n)
	{
		x = rand() % (int)lineCount;
		y = rand() % (int)charCount;
		if (bombMap[x][y] == '0')
		{
			bombMap[x][y] = 'b';
			i++;
		}
	}
}

/**
 * checkDone - function that checks if a bomb was stepped on
 * @rc: struct that holds SDL instances/objects
 * @bombMap: 2D array of maze
 * @pos: current position
 * @quit: the int that will end the loop
 **/
void checkDone(SDL_Instance rc, char **bombMap, coord pos, int *quit)
{
	SDL_Surface *img;
	SDL_Texture *host;
	SDL_Texture *target;

	if (bombMap[(int)pos.x][(int)pos.y] != '1'
	    && bombMap[(int)pos.x][(int)pos.y] != 'b')
		bombMap[(int)pos.x][(int)pos.y] = 'd';
	if (bombMap[(int)pos.x][(int)pos.y] == 'b')
	{
		img = SDL_LoadBMP("pics/cry.bmp");
		if (img == NULL)
		{
			printf("No picture!\n");
			return;
		}
		host = SDL_CreateTextureFromSurface(rc.renderer, img);
		SDL_FreeSurface(img);
		target = SDL_CreateTexture(rc.renderer, SDL_PIXELFORMAT_ARGB8888,
					   SDL_TEXTUREACCESS_TARGET, screenWidth, screenHeight);
		SDL_SetRenderTarget(rc.renderer, target);
		SDL_RenderClear(rc.renderer);
		SDL_RenderCopy(rc.renderer, host, NULL, NULL);
		SDL_SetRenderTarget(rc.renderer, NULL);
		SDL_RenderClear(rc.renderer);
		SDL_RenderCopy(rc.renderer, target, NULL, NULL);
		SDL_RenderPresent(rc.renderer);
		SDL_Delay(2000);
		printf("YOU LOSE!\n");
		SDL_DestroyTexture(target);
		SDL_DestroyTexture(host);
		*quit = 1;
	}
}
