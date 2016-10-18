#include "holberton.h"
/**
 * main - working area
 *
 * Return: 0 to end
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
