#include "holberton.h"
/**
 * _isalpha - working area
 * @c: starting point
 * Return: an int 0 or 1
 */
int _isalpha(int c)
{
	int c;

	if ((c < 'Z' && c > 'A') || (c < 'z' && c > 'a'))
		return (1);
	else
		return (0);
}
