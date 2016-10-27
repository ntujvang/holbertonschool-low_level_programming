#include "holberton.h"
/**
 * _strcmp - comparing 2 strings
 * @s1: first target
 * @s2: second target
 * Return: difference between the two (math)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
