#include "maze.h"

/**
 * freeSDL - function that frees all SDL instances
 * @rc: the struct holding all instances
 **/
void freeSDL(SDL_Instance rc)
{
	SDL_DestroyTexture(rc.minimap);
	SDL_DestroyTexture(rc.texture);
	SDL_DestroyRenderer(rc.renderer);
	SDL_DestroyWindow(rc.window);
}
