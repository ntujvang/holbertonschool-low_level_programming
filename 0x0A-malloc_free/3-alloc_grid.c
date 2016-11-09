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
	int i;
	int **s;

	if (width < 0 || height < 0)
		return (NULL);
	s = (int **) malloc(height * sizeof(int *));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		s[i] = (int *) malloc(width * sizeof(int *));
		if (s[i] == '\0')
		{
			free(s[i]);
			return (NULL);
		}
		i++;
	}
	return (s);
}
