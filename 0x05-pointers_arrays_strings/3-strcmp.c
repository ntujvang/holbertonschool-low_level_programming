#include "holberton.h"
/**
 * _strcmp - comparing 2 strings
 * @s1: first target
 * @s2: second target
 * Return: difference between the two
 */
int _strcmp(char *s1, char *s2)
{
	int i, math;

	i = 0;
	if (s1[i] < s2[i])
	{
		math = s1[i] - s2[i];
		return (math);
	}
	else if (s1[i] > s2[i])
	{
		math = s1[i] - s2[i];
		return (math);
	}
	else
	{
		math = 0;
		return (math);
	}
}
