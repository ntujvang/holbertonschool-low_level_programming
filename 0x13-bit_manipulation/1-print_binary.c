#include "holberton.h"
/**
 * print_binary - printing the binary
 * @n: the number being converted
 * Return: the binary
 */
void print_binary(unsigned long int n)
{
	int i, be;

	be = 0;
	i = sizeof(unsigned long int) * 8 - 1;
	while (i >= 0)
	{
		if (n >> i == 1)
			be = 1;
		if (be == 1)
		{
			if (n >> i & 1)
				_putchar('1');
			else
				_putchar('0');
		}
		i--;
	}
	if (n == 0)
		_putchar('0');
}
