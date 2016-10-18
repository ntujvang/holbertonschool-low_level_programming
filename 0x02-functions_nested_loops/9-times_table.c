#include "holberton.h"
/**
 * times_table - working area
 *
 * Return: void to end
 */
void times_table(void)
{
	int i, n, k;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			k = i * n;
			if (k < 10)
			{
				if (n != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			if (n < 9)
				_putchar(',');
		}
		_putchar('\n');
		n = 0;
	}
}
