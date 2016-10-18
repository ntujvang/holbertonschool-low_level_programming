#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - working area
 * @n: starting num
 * Return: 0 to end
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98\n");
	}
	else
		printf("98\n");
}
