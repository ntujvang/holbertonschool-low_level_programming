#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - concatenating 2 strings
 * @s1: first string
 * @s2: second string
 * Return: the strings combined together
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, n, k;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (n = 0; s2[n] != '\0'; n++)
		;
	k = i + n + 1;
	s = malloc(k * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
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
