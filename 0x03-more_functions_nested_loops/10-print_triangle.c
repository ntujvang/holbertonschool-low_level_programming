#include "holberton.h"
/**
 * print_triangle - make a triangle!
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, n, k;

	i = 1;
	while (i <= size)
	{
		n = 1;
		while (n <= size)
		{
			k = size - n;
			if (k >= i)
				_putchar(' ');
			else
				_putchar('#');
			n++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
