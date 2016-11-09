#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenating 2 strings
 * @s1: first string
 * @s2: second string
 * Return: the strings combined together
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, n;
	char *s;

	i = 0;
	s = malloc(sizeof(*s1) + sizeof(*s2));
	if (s == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2[n] != '\0')
	{
		s[i] = s2[n];
		i++;
		n++;
	}
	s[i] = '\0';
	return (s);
}
