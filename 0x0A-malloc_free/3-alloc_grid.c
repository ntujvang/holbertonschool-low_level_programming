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
	int i, box;
	int **s;

	i = 0;
	box = width * height;
	if (width < 0 || height < 0)
		return (NULL);
	s = (int **) malloc(box * sizeof(int *));
	if (s == NULL)
		return (NULL);
	while (i < height)
	{
		s[i] = (int *) malloc(width * sizeof(int *));
		if (s[i] == NULL)
			return (NULL);
		i++;
	}
	return (s);
}
