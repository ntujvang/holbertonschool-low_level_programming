#include "holberton.h"
/**
 * main - working area
 *
 * Return: void to end
 */
void print_alphabet_x10(void)
{
	int a, i;

	a = 'a';
	for (i = 0; i < 11; i++)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
	_putchar('\n');
	a = 'a';
	}
	return;
}
