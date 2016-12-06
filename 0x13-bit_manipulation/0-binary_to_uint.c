#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary into unsigned int
 * @b: binary going in
 * Return: NULL or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, value;
	int i;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	i--;
	value = 1;
	sum = 0;
	while (i >= 0)
	{
		if (b[i] == '0')
			sum += 0;
		else if (b[i] == '1')
			sum += value;
		else
			return (0);
		value *= 2;
		i--;
	}
	return (sum);
}
