#include "holberton.h"
#include <string.h>
/**
 * puts_half - printing half a string
 * @str: item going in
 * Return: void
 */
void puts_half(char *str)
{
	int i, h, l, j, k;
	int max[100];

	i = strlen(str) -1;
	h = strlen(str) / 2;
	j = i / 2;
	if (i % 2 == 0)
	{
		for (k = j; k <= i; k++)
		{
			max[k] = str [k];
			_putchar(max[k]);
		}
	}
	else
		for (l = h; l <= i; l++)
		{
			max[l] = str[l];
			_putchar(max[l]);
		}
	_putchar('\n');
}
