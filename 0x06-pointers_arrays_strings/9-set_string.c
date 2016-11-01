#include "holberton.h"
/**
 * set_string - making a pointer to a pointer
 * @s: pointer object
 * @to: pointer to pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
