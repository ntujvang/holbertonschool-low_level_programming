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
	int i, k;

	k = 0;
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n ==0)
		_putchar('0');
	for (i = 0; n != 0 ; i++)
	{
		max[i] = (n % 10);
		n = n / 10;
		k = k + 1;
	}
	k = k -1;
	while (k >= 0)
	{
		_putchar(max[k] + '0');
		k--;
	}
}
