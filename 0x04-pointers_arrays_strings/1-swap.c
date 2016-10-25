#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - changing #
 * @a: first #
 * @b: second #
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
