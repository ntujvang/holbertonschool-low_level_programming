#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns pointer to 2 newly created 2D int grid
 * @width: width of the grid
 * @height: heigth of the grid
 * Return: pointers or NULL
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **s;

	i = 0;
	s = (int **) malloc(width * sizeof(int *));
	while (i < width)
	{
		s[i] = (int *) malloc(height * sizeof(int));
		i++;
	}
	if (s == NULL)
		return (NULL);
	else
		return (s);
}
