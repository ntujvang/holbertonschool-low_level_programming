#include "holberton.h"
/**
 * rev_string - going backwards
 * @s: string going in
 * Return: void
 */
void rev_string(char *s)
{
	int c, k;
	char max[1000];
	char *t;

	t = s;
	for (c = 0; *t != 0 ; c++, t++)
	{
		max[c] = *t;
		k = c;
	}
	for (k = k ; k >= 0; k--, s++)
	{
		*s = max[k];
	}
}
