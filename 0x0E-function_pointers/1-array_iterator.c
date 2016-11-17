#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes function on each array element
 * @array: the array
 * @size: size of array
 * @action: pointer function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
