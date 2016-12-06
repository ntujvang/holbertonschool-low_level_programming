#include "holberton.h"
#include <stdio.h>
/**
 * get_endianness - get the endianness!!
 * Return: 0 for big 1 for little
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	if (*c)
		return (1);
	return (0);
}
