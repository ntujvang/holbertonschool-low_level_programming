#include "holberton.h"
/**
 * _isupper - working area
 * @c: variable being checked
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
