#include "holberton.h"
/**
 * print_alphabet - working area
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
