#include "maze.h"

/**
 * keyCheck - function that checks which key was pressed
 * @keyPress: struct that holds all possible key variables
 * @e: SDL_Event variable
 **/
void keyCheck(keys *keyPress, SDL_Event *e)
{
	if (e->type == SDL_KEYDOWN)
	{
		if (e->key.keysym.scancode == SDL_SCANCODE_LEFT)
			keyPress->left = 1;
		else if (e->key.keysym.scancode == SDL_SCANCODE_RIGHT)
			keyPress->right = 1;
		else if (e->key.keysym.scancode == SDL_SCANCODE_UP)
			keyPress->up = 1;
		else if (e->key.keysym.scancode == SDL_SCANCODE_DOWN)
			keyPress->down = 1;
		else if (e->key.keysym.scancode == SDL_SCANCODE_M)
		{
			if (keyPress->m == 0)
				keyPress->m = 1;
			else
				keyPress->m = 0;
		}
	}
	else if (e->type == SDL_KEYUP)
	{
		if (e->key.keysym.scancode == SDL_SCANCODE_LEFT)
			keyPress->left = 0;
		else if (e->key.keysym.scancode == SDL_SCANCODE_RIGHT)
			keyPress->right = 0;
		else if (e->key.keysym.scancode == SDL_SCANCODE_UP)
			keyPress->up = 0;
		else if (e->key.keysym.scancode == SDL_SCANCODE_DOWN)
			keyPress->down = 0;
	}

}
