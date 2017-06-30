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
	map floor, bomb;
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
	floor.map = bomb.map = NULL;
	bomb.map = makeMap(argv[1]);
	floor.map = makeMap(argv[1]);
	makeBomb(bomb.map, argv[1]);
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
		checkDone(rc, bomb.map, pos, &quit);
		draw(rc, floor.map, pos, dir, plane, argv[1], keyPress, bomb.map);
	}
	freeSDL(rc);
	SDL_Quit();
	return (0);
}
