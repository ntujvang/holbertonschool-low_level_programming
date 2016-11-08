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
	int i, box, n;
	int **s;

	box = width * height;
	if (width < 0 || height < 0)
		return (NULL);
	s = (int **) malloc(box * sizeof(int *));
	if (s == NULL)
		return (NULL);
	while (i < box)
	{
		s[i] = (int *) malloc(height * sizeof(int *));
		n = 0;
		while (n < width)
		{
			s[n] = (int *) malloc(width * sizeof(int *));
			n++;
		}
		i++;
	}
	return (s);
}
