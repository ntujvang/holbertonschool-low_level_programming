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
	int i, n;
	int **s;

	i = 0;
	s = malloc(height * sizeof(height));
	if (s == NULL)
		return (NULL);
	while (i < height)
	{
		s[i] = malloc(width * sizeof(width));
		if (s[i] == NULL)
			return (NULL);
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
