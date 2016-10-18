#include "holberton.h"
/**
 * print_alphabet_x10 - working area
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a, i;

	a = 'a';
	for (i = 0; i < 10; i++)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
	_putchar('\n');
	a = 'a';
	}
}
