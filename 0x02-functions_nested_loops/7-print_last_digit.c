#include "holberton.h"
/**
 * print_last_digit - working area
 * @i: starting point
 * Return: n value of last digit
 */
int print_last_digit(int i)
{
	int n;

	if (i < 0)
		n = ((i % 10) * -1);
	else if (i > 10)
		n = i % 10;
	else
		n = i;
	_putchar(n + '0');
	return (n);
}
