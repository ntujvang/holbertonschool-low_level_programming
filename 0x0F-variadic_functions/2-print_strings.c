#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_string - prints a string
 * @separator: char separating
 * @n: number of strings passed
 * Return: string plus \n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *tmp;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		tmp = va_arg(list, char*);
		if (tmp == NULL)
			printf("(nil)");
		else
		{
			printf("%s", tmp);
			if (i < n -1 && separator != NULL)
				printf("%s", separator);
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
