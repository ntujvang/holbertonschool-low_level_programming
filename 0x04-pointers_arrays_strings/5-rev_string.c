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
	int m, n, i;
	char h[10];

	n = 10 - 1;
	for (m = 0; m <= n; m++)
	{
		h[m] = s[n-m];
	}
	for (i = 0; i <= n; i++)
	{
		     s[i] = h[i];
		     putchar(s[i]);
	}
}
