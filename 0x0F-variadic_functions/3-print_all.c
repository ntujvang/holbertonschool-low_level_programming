#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - helper for char
 * @list: list
 * @separator: separation point
 * Return: void
 */
void print_char(va_list list, char *separator)
{
	printf("%s%c", separator, va_arg(list, int));
}
/**
 * print_int - helper for int
 * @list: list
 * @separator: separation point
 * Return: void
 */
void print_int(va_list list, char *separator)
{
	printf("%s%d", separator, va_arg(list, int));
}
/**
 * print_float - helper for float
 * @list: list
 * @separator: separation point
 * Return: void
 */
void print_float(va_list list, char *separator)
{
	printf("%s%f", separator, va_arg(list, double));
}
/**
 * print_string - helper for string
 * @list: list
 * @separator: separation point
 * Return: void
 */
void print_string(va_list list, char *separator)
{
	char *tmp;

	tmp = va_arg(list, char *);
	if (tmp == NULL)
		tmp = "(nil)";
	printf("%s%s", separator, tmp);
}
/**
 * print_all - prints anything
 * @format: list of args
 * Return: all items
 */
void print_all(const char * const format, ...)
{
	int i, n;
	va_list list;
	char *separator;
	print form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(list, format);
	separator = "";
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		n = 0;
		while (n < 4)
		{
			if (*form[n].p == format[i])
			{
				form[n].f(list, separator);
				separator = ", ";
			}
			n++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
