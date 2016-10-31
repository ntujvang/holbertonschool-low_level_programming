#include "holberton.h"
/**
 * *_strchr - finding where something appears first
 * @s: target objective
 * @c: target
 * Return: everything after the target
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	else
		return (0);
}
