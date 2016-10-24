#include "holberton.h"
/**
 * print_line - working area
 * @n: times to print
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
