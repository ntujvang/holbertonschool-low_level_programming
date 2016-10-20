#include "holberton.h"
/**
 * print_diagonal - working area
 * @n: number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
	int b, i;

	b = 0;
	while (b < n)
	{
		i = 0;
		while (i <= b)
		{
			if (i == b)
				_putchar('\\');
			else
				_putchar(' ');
			i++;
		}
		_putchar('\n');
		b++;
	}
	if (n <= 0)
		_putchar('\n');
}
