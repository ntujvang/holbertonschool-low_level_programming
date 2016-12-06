#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - printing the binary
 * @n: the number being converted
 * Return: the binary
 */
void print_binary(unsigned long int n)
{
	unsigned int tmp;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}
	i = 0;
	tmp = n;
	while ((tmp >> 1) > 0)
	{
		i++;
		tmp = tmp >> 1;
	}
	while (i >= 0)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
		i--;
	}
}
