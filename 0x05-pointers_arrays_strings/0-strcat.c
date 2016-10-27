#include "holberton.h"
/**
 * *_strcat - adding strings!
 * @dest: first string
 * @src: second string
 * Return: char of string
 */
char *_strcat(char *dest, char *src)
{
	int i, j
	char max[100];

	i = 0;
	while (dest[i] != '\0')
	{
		max[i] = dest[i];
		i++;
		j = i;
	}
	while (src[j] != '\0')
	{
		max[j] = src[j];
		j++;
	}
	return (max);
}
