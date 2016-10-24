#include "holberton.h"
#include <stdio.h>
/**
 * main - working area
 *
 * Return: void to end
 */
int main(void)
{
	int i, n;

	n = 0;
	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n += i;
		}
	}
	printf("%d\n", n);
	return (0);
}
