#include "holberton.h"
/**
 * _strspn - count letters in first part only
 * @s: target objective
 * @accept: items searching for
 * Return: number of bytes from s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n, k, y;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		n = 0;
		y = 0;
		while (accept[n] != '\0')
		{
			if (accept[n] != s[i])
				n++;
			if (accept[n] == s[i])
			{
				k++;
				n++;
				y++;
			}
		}
		if (y == 0)
			return (k);
		i++;
	}
	return (k);
}
