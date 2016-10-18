#include "holberton.h"
/**
 * _islower - working area
 * @c: starting point
 * Return: void to end
 */
int _islower(int c)
{
	if (c < 'z' && c > 'a')
		return (1);
	else
		return (0);
}
