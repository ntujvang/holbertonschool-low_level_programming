#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - printing out every even?
 * @str: item going in
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int max[100];

	i = 0;
	while (*str != 0)
	{
		max[i] = *str;
		if (i % 2 == 0)
			_putchar(max[i]);
		str++;
		i++;
	}
	_putchar('\n');
}
