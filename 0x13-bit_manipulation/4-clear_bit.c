#include "holberton.h"
/**
 * clear_bit - turns the value to 0
 * @n: the number
 * @index: the location of wanted value
 * Return: 1 if true -1 if false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long value;
	unsigned int tmp;

	if (index > 64)
		return (-1);
	tmp = index;
	value = 1;
	while (tmp > 0)
	{
		value *= 2;
		tmp--;
	}
	if ((*n >> index) & 1)
		*n -= value;
	return (1);
}
