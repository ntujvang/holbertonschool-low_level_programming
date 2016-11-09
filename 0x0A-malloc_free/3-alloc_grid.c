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
	int i, box, n;
	int **s;

	box = width * height;
	if (width < 0 || height < 0)
		return (NULL);
	s = (int **) malloc(box * sizeof(int *));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		n = 0;
		while (n < width)
		{
			*s = 0;
			s++;
			n++;
		}
		i++;
	}
	return (s);
}
