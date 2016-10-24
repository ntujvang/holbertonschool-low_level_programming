#include "holberton.h"
#include <stdio.h>
/**
 * main - working area
 *
 * Return: 0 to end
 */
int main(void)
{
	int p, i, n, k;
	int sum;

	n = 1;
	i = 2;
	k = 0;
	sum = 2;
	while (k < 4000000)
	{
		p = i + n;
		n = i;
		i = p;
		if (p % 2 == 0)
		{
			sum += p;
		}
		k = p;
	}
	printf("%d\n", sum);
	return (0);
}
