#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - making a s1 string followed by the first n bytes of s2
 * @s1: first string
 * @s2: string being cut
 * @n: amount to cut from s2
 * Return: s1 + s2 @ n bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, c, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (c = 0; s2[c] != '\0'; c++)
		;
	c++;
	if (n > c)
	{
		k = n - c;
		c = n - k;
	}
	k = i + c;
	s = malloc(k * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (c = 0; (c + i) <= k; c++, i++)
		s[i] = s2[c];
	s[i] = '\0';
	return (s);
}
