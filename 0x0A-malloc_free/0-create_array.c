#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - makes an array of chars
 * @size: the size of the array
 * @c: the character in the array
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	i = 0;
	s = (char *) malloc(size * sizeof(int));
	while (i < size)
	{
		s[i] = c;
		if (s == NULL)
		{
			while (s >= s)
			{
				free(s);
				s--;
			}
			free(s);
			return (NULL);
		}
		i++;
	}
	return (s);
}
