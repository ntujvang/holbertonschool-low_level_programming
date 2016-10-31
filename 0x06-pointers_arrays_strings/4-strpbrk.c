#include "holberton.h"
/**
 * *_strpbrk - matching letters
 * @s: target ojective
 * @accept: searching objective
 * Return: string with the matching bytes at first appearance
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n, k;

	i = 0;
	while (s[i] != '\0')
	{
		n = 0;
		k = 0;
		while (accept[n] != '\0')
		{
			if (accept[n] == s[i])
			{
				k++;
			}
			n++;
		}
		if (k != 0)
			return (s + i);
		i++;
	}
	return (0);
}
