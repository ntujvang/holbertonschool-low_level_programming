#include "holberton.h"
/**
 * print_rev - going backwards
 * @s: string going in
 * Return: void
 */
void print_rev(char *s)
{
	int c, k;
	int max[100];

	for (c = 0; *s != 0 ; c++, s++)
	{
		max[c] = *s;
		k = c;
	}
	for (k = c - 1; k >= 0; k --)
	{
		_putchar(max[k]);
	}
	_putchar('\n');
}
