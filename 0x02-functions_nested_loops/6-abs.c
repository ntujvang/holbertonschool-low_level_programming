#include "holberton.h"
/**
 * _abs - working area (absolute value)
 * @int: # working with
 * Return: absolute value of #
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
		return (i);
}
