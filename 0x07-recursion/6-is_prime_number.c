#include "holberton.h"
/**
 * is_prime_number - finding the prime #
 * @n: starting number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - finding out prime
 * @n: initial number
 * @i: dividing number
 * Return: 1 for prime 0 or non
 */
int prime(int n, int i)
{
	if (n % i != 0 && n > i)
		return (prime(n, i + 1));
	if (n % i == 0 && n > i)
		return (0);
	if (n == i)
		return (1);
	return (0);

}
