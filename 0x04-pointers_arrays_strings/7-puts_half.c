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
	h = i - 1;
	if (i % 2  == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;
	while (i <= h)
	{
		_putchar(max[i]);
		i++;
	}
	_putchar('\n');
}
