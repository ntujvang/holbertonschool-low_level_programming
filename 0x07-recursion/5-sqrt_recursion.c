#include "holberton.h"
/**
 * _sqrt_recursion - square rooting!
 * @n: number we killing
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (helpme(n, 1));
}

/**
 * helpme - finds the value of i * i that == n
 * @n: target value
 * @i: the square root #
 * Return: the square root #
 */
int helpme(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (helpme(n, i + 1));
	return (-1);
}
