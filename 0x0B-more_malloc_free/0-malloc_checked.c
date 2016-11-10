#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - using malloc to allocated memory for a vale
 * @b: item being allocated for
 * Return: 98 if fail, or the address of the item
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit (98);
	return (s);
}
