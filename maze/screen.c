#include "maze.h"

/**
 * makeSDL - function to start up all SDL objects
 * @rc: structure hosting all SDL objects
 * @file: name of maze's file
 **/
void makeSDL(SDL_Instance *rc, char *file)
{
	size_t lineCount, store;

	lineCount = lineCounter(file);
	store = bigLine(file);
	rc->window = SDL_CreateWindow("The Maze", SDL_WINDOWPOS_UNDEFINED,
				     SDL_WINDOWPOS_UNDEFINED, screenWidth,
				     screenHeight, SDL_WINDOW_SHOWN);
	if (rc->window == NULL)
	{
		SDL_Quit();
		return;
	}
	rc->renderer = SDL_CreateRenderer(rc->window, -1,
					 SDL_RENDERER_ACCELERATED |
					 SDL_RENDERER_PRESENTVSYNC);
	if (rc->renderer == NULL)
	{
		SDL_DestroyWindow(rc->window);
		SDL_Quit();
		return;
	}
	rc->texture = SDL_CreateTexture(rc->renderer, SDL_PIXELFORMAT_ARGB8888,
					SDL_TEXTUREACCESS_TARGET, lineCount + 2, store + 2);
	rc->minimap = SDL_CreateTexture(rc->renderer, SDL_PIXELFORMAT_ARGB8888,
					SDL_TEXTUREACCESS_TARGET, lineCount + 2, store + 2);
	SDL_SetTextureBlendMode(rc->texture, SDL_BLENDMODE_BLEND);
	SDL_SetTextureAlphaMod(rc->texture, 0x88);
	SDL_RenderSetLogicalSize(rc->renderer, screenWidth, screenHeight);
}
