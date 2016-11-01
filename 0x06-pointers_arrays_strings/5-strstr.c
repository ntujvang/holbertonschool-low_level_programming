#include "holberton.h"
/**
 * *_strstr - finding first occurence of a pattern
 * @haystack: target objective
 * @needle: search requirement
 * Return: the search requirment
 */
char *_strstr(char *haystack, char *needle)
{
	int p, i, n, k;

	i = 0;
	n = 0;
	p = 0;
	while (needle[p] != '\0')
		p++;
	while (haystack[i] != '\0')
	{
		k = 0;
		if (haystack[i] == needle[k])
		{
			n = i;
			while (haystack[n] == needle[k])
			{
				if (k == p)
				{
					return (haystack + i);
				}
				k++;
				n++;
			}
		}
		i++;
	}
	return ('\0');
}
