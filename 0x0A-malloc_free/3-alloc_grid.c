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
	int i, n, offset;
	int **s;
	int *tmp;

	if (width <= 0 || height <= 0)
		return (NULL);
	offset = height * sizeof(int *);
	s = malloc(offset + height*width*sizeof(int));
	if (s == NULL)
		return (NULL);
	tmp = (int *)((char *)s + offset);
	i = 0;
	while (i < height)
	{
		s[i] = tmp + i*width;
		if (s[i] == NULL)
		{
			while (i >= 0)
			{
				free(s[i]);
				i--;
			}
			free(s);
			return (NULL);
		}
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
