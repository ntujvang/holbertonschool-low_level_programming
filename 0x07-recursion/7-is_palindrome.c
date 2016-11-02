#include "holberton.h"
/**
 * is_palindrome - finding palindromes
 * @s: target objective
 * Return: 1 for true 0 for false
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	if (i <= 0)
		return (1);
	return (palindme(s, i));
}
/**
 * palindme - helper for finding out if palindrome is true
 * @s: item going in
 * @i: length of s
 * Return: 1 for true 0 for fale
 */
int palindme(char *s, int i)
{
	if (i <= 0)
		return (1);
	if (*s != s[i])
		return (0);
	return (palindme(s + 1, i - 2));

}
/**
 * _strlen_recursion - counting it up!
 * @s: item going in
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
