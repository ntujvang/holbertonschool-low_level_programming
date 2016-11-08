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
	int i;
	char *s;

	i = 0;
	s = (char *) malloc(sizeof(*str));
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	if (s == NULL)
		return (NULL);
	else
		return (s);
}
