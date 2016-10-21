#include "holberton.h"
#include <stdio.h>
/**
 * main - working area
 *
 * Return: 0 to end
 */
int main(void)
{
	long i, n, sum;

	i = 612852475143;
	n = 2;
	while (n < i)
	{
		if (i % n != 0)
			n++;
		if (i % n == 0)
		{
			i = i / n;
			n = 2;
		}
		if (i != 1)
			sum = i;
	}
	printf("%lu\n", sum);
	return (0);
}
