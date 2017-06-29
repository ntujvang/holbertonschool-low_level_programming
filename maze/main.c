#include "maze.h"

/**
 * main - primary function to initiate the game
 * @argc: number of arguments passed
 * @argv: number of total arguments passed
 * Return: 0 to end
 */
int main(int argc, char *argv[])
{
	SDL_Instance rc;
	SDL_Event e;
	map floor;
	coord pos = {4, 2};
	coord dir = {-1, 0};
	coord plane = {0, 0.66};
	keys keyPress = {0, 0, 0, 0, 0};
	int quit = 0;

	if (argc < 2)
	{
		printf("Not enough args\n");
		return (1);
	}
	floor.map = NULL;
	floor.map = makeMap(argv[1]);
	SDL_Init(SDL_INIT_VIDEO);
	makeSDL(&rc, argv[1]);
	while (quit == 0)
	{
		while (SDL_PollEvent(&e))
		{
			if (e.type == SDL_QUIT)
				quit = 1;
			keyCheck(&keyPress, &e);
		}
		move(keyPress, &pos, &dir, &plane, floor.map);
		draw(rc, floor.map, pos, dir, plane, argv[1], keyPress);
	}
	freeSDL(rc);
	SDL_Quit();
	return (0);
}
