#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees up a 2D grid
 * @grid: double pointer to the grid
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
