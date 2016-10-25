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
	int i, s, k;
	int max[100];

	s = strlen(str) -1;
	for (i = 0; i <= s; i++)
	{
		max[i] = str[i];
	}
	for (k = 0; k <= s; k = k + 2)
		putchar(max[k]);
	putchar('\n');
}
