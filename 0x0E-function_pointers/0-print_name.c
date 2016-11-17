#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints the name of user and a string
 * @name: name
 * @f: pointer to the string
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
