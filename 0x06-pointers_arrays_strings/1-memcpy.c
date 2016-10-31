#include "holberton.h"
/**
 * *_memcpy - copy into something
 * @dest: target area
 * @src: object being cut
 * @n: amount of bytes we taking
 * Return: char string of cut
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src [i];
		i++;
	}
	return (dest);
}
