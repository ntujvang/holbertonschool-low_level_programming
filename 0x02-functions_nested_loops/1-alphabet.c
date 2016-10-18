#include "holberton.h"
/**
 * print_alphabet - working area
 *
 * Return: return to end
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
	return;
}
