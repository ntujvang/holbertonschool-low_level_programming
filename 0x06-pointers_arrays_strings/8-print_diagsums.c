#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - adding up the diagonals
 * @a: array
 * @size: how many to add
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, n;
	int sum1, sum2;

	i = 0;
	n = size * size;
	sum1 = 0;
	sum2 = 0;
	while (i < n)
	{
		if (i % (size + 1) == 0 || i == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0 && i < n - 1 && i > 0)
			sum2 += *(a + i);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
