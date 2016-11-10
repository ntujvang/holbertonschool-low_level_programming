#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - create an array of values
 * @min: the first set
 * @max: the second set
 * Return: pointer to new array or NULL
 */
int *array_range(int min, int max)
{
	int *s;
	int i, n;

	if (min > max)
		return (NULL);
	n =  max - min + 1;
	s = malloc(n * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < n; min++, i++)
		s[i] = min;
	return (s);
}
