#include "holberton.h"
/**
 * _pow_recursion - raising something to a power!
 * @x: first value
 * @y: raising to power of
 * Return: the total
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
