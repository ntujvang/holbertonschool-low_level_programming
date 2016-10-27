#include "holberton.h"
/**
 * reverse_array - swap it around!
 * @a: incoming item
 * @n: number of items
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, p;

	i = 0;
	n = n - 1;
	while (i <= n)
	{
		p = a[n];
		a[n] = a[i];
		a[i] = p;
		n--;
		i++;
	}
}
