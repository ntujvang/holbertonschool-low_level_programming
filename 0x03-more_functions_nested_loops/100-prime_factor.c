#include "holberton.h"
#include <stdio.h>
/**
 * main - working area
 *
 * Return: 0 to end
 */
int main(void)
{
	long i, n, sum, highest;

	i = 612852475143;
	n = 2;
	highest = 0;
	while ( i % n != 0)
	{
		if (i % n == 0)
			sum = i / n;
		if (sum > highest)
			highest = sum;
		n++;
	}
	printf("%li\n", highest);
	return (0);
}
