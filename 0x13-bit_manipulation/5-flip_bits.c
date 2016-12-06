#include "holberton.h"
/**
 * flip_bits - flip it! mmHmm!
 * @n: first number
 * @m: second number
 * Return: the times flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value;
	int i;

	value = n ^ m;
	i = 0;
	while (value > 0)
	{
		if (value & 1)
			i++;
		value = value >> 1;
	}
	return (i);
}
