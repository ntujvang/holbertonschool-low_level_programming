#include <stdlib.h>
#include "function_pointers.h"
/**
 * in_index - searches for an integer
 * @array: array searching
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: point where both index matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
