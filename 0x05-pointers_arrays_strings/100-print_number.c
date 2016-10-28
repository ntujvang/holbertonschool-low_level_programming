#include "holberton.h"
/**
 * print_number - make a number!
 * @n: number going in
 * Return: our number!
 */
void print_number(int n)
{
	int k, j, o;

	k = n;
	o = n;
	j = 1;
	if (n != 0)
	{
		if (n < 0)
		{
			k = n * -1;
			o = n * -1;
			_putchar('-');
		}
		while (k > 10)
		{
			k = (k / 10);
			j *= 10;
			if (k < 10)
				j /= 10;
		}
		while (j > 0)
		{
			_putchar((o / (10 * j)) + '0');
			o = (o % (10 * j));
			j /= 10;
			if (o < 10)
				_putchar((o % 10) + '0');
		}
	}
	else
		_putchar('0');
}
