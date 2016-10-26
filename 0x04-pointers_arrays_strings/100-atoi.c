#include "holberton.h"
/**
 * _atoi - return first set of #
 * @s: item going in
 * Return: the number
 */
int _atoi(char *s)
{
	int i, k, sum;

	i = 0;
	k = 1;
	sum = 0;
	while (s[i] != '\0' && (s[i] > '9' || s[i] < '0'))
	{
		if (s[i] == '-')
		{
			k = k * -1;
		}
		i++;
	}
	while (s[i] != '\0' && (s[i] <= '9' && s[i] >= '0'))
	{
		sum = sum * 10 - (s[i] - '0');
		i++;
	}
	k = k * -1;
	return (sum * k);
}
