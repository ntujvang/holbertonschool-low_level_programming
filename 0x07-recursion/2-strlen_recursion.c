#include "holberton.h"
/**
 * _strlen_recursion - length of string
 * @s: item going in
 * Return: value of length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
