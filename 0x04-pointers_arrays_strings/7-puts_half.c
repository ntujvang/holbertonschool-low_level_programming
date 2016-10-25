#include "holberton.h"
#include <string.h>
/**
 * puts_half - printing half a string
 * @str: item going in
 * Return: void
 */
void puts_half(char *str)
{
	int i, h;
	int max[100];

	i = 0;
	while (*str != 0)
	{
		max[i] = *str;
		str++;
		i++;
	}
	h = i / 2;
	while (h <= i)
	{
		_putchar(max[h]);
		h++;
	}
	_putchar('\n');
}
