#include "maze.h"

void freeSDL(SDL_Instance rc)
{
	SDL_DestroyTexture(rc.minimap);
	SDL_DestroyTexture(rc.texture);
	SDL_DestroyRenderer(rc.renderer);
	SDL_DestroyWindow(rc.window);
}
