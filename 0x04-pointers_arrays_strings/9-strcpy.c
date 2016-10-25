#include "holberton.h"
/**
 * *_strcpy - copy a string!
 * @src: source string
 * @dest: returning string
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
