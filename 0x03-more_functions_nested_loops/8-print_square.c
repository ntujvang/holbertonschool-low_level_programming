#include "holberton.h"
/**
 * print_square
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int i, r;

	i = 0;
	while (i < size)
	{
		r = 0;
		while (r < size)
		{
			_putchar('#');
			r++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
