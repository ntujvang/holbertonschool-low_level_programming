#include "holberton.h"
/**
 * _puts_recursion - printing a new line
 * @s: item going in
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
