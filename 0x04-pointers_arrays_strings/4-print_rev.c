#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - going backwards
 * @s: string going in
 * Return: void
 */
void print_rev(char *s)
{
	int l, c, i;
	char max[100];

	l = strlen(s) - 1;
	i = strlen(s) -1;
	for (c = 0; c <= i ; c++, l--)
	{
		max[c] = s[l];
		putchar(max[c]);
	}
	putchar('\n');
}
