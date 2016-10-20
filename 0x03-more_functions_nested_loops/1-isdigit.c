#include "holberton.h"
/**
 * _isdigit - working area
 * @c: variable being checked
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
