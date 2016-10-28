#include "holberton.h"
/**
 * print_number - make a number!
 * @n: number going in
 * Return: our number!
 */
void print_number(int n)
{
	int j, o, k;

	o = n;
	k = n;
	j = 1;
	while (k / 10 != 0)
	{
		k = (k / 10);
		j *= 10;
	}
	if (n > 0)
		o = n * -1;
	if (n < 0)
		_putchar('-');
	while (j > 0)
	{
		_putchar(-((o / j) % 10) + '0');
		j /= 10;
	}
}
