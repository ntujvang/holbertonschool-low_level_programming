#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reversing
 * @s: starting string
 * Return: void
 */
void rev_string(char *s)
{
	int m;
	char h[10];

	for (m = 0; m < 10; m++)
	{
		h[m] = s[9-m];
		putchar(h[m]);
	}
}
