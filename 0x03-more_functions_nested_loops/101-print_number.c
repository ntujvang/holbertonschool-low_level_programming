#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_number - printing numbers!
 * @n: number going in
 * Return: void
 */
void print_number(int n)
{
	int max[10];
	long i, k, l;

	l = n;
	k = 0;
	if (n < 0)
	{
		l = l * -1;
		_putchar('-');
	}
	if (n == 0)
		_putchar('0');
	for (i = 0; l != 0 ; i++)
	{
		max[i] = (l % 10);
		l = l / 10;
		k = k + 1;
	}
	k = k - 1;
	while (k >= 0)
	{
		_putchar(max[k] + '0');
		k--;
	}
}
