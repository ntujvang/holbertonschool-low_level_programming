#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adds all values
 * @n: constant num
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	i = 0;
	sum = 0;
	va_start(list, n);
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
