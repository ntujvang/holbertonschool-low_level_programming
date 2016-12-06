#include "holberton.h"
/**
 * set_bit - set a bit to 1
 * @n: address of the number
 * @index: the bit location to change
 * Return: 1 for true -1 for false
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
		return (-1);
	value = 1;
	while (index > 0)
	{
		value *= 2;
		index--;
	}
	*n += value;
	return (1);
}
