#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns pointer to a newly created 2D int grid
 * @width: width of the grid
 * @height: heigth of the grid
 * Return: pointers or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, n;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = (int **) malloc(height * sizeof(int *));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		s[i] = (int *) malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			while (i >= 0)
			{
				free(s[i]);
				i--;
			}
			free(s[i]);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		n = 0;
		while (n < width)
		{
			s[i][n] = 0;
			n++;
		}
		i++;
	}
	return (s);
}
