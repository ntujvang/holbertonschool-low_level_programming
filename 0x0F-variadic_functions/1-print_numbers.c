#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print a list followed by new line
 * @separator: char printed inbetween nums
 * @n: num of ints
 * Return: list of numbers + \n
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(list);
	printf("\n");
}
