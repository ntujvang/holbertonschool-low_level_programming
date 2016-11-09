#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - making a copy of a string into a new space in memory
 * @str: string that is being copied
 * Return: pointer to the copy string or NULL
 */
char *_strdup(char *str)
{
	unsigned int i, n;
	char *s;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	n++;
	s = malloc(n * sizeof(*s));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i <= n)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
