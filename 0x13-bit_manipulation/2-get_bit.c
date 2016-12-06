#include "holberton.h"
/**
 * get_bit - returns value at given index
 * @n: the number
 * @index: the wanted value
 * Return: index for true -1 for false
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
		return (-1);
	tmp = n >> index;
	return (tmp & 1);
}
