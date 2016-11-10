#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - allocating memory of an array of nmemb elements of x bytes
 * @nmemb: array elements
 * @size: size of bytes
 * Return: pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, n;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	s = malloc(n);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		s[i] = 0;
	return (s);
}
