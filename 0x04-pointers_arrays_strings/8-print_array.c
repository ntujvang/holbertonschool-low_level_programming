#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print an array
 * @a: item coming in
 * @n: how many things in array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
