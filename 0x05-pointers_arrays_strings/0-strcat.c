#include "holberton.h"
/**
 * _strcat - adding strings together
 * @dest: first string
 * @src: second string
 * Return: char of string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		j = i;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
