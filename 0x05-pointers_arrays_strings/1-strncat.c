#include "holberton.h"
/**
 * *_strncat - chopping up a string and adding it
 * @dest: initial string
 * @src: second string
 * @n: dividing #
 * Return: dest as a concat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		j = i;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
