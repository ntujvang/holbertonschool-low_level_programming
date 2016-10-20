#include "holberton.h"
/**
 * more_numbers - working area
 *
 * Return: void
 */
void more_numbers(void)
{
	int c, i;

	i = 0;
	while (i < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			c++;
		}
		_putchar('\n');
		i++;
	}
}
