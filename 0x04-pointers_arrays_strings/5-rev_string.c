#include "holberton.h"
/**
 * rev_string - going backwards
 * @s: string going in
 * Return: void
 */
void rev_string(char *s)
{
	int c;
	char max[1000];
	char *t;

	t = s;
	c = 0;
	while (*t != 0)
	{
		max[c] = *t;
		t++;
		c++;
	}
	c = c - 1;
	while (c >= 0)
	{
		*s = max[c];
		c--;
		s++;
	}
}
