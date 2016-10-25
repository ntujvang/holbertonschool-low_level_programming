#include "holberton.h"
#include <stdio.h>
/**
 * _puts - writing a string
 * @str: string goign in
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++, i++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
