#include "holberton.h"
/**
 * *_memset - filling up things
 * @s: object being modified
 * @b: replacement items
 * @n: how many bytes
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
