#include "search_algos.h"
/**
 * linear_search - replication of linear search algorithm
 * @array: pointer to the first elemnt of array to search
 * @size: the size of the array
 * @value: the value looking for
 * Return: the searched value or -1 for fail
 */
int linear_search(int *array, size_t size, int value)
{
	int temp;
	size_t i;

	i = 0;
	temp = 0;
	if (array == NULL)
		return (-1);
	while (i < size)
	{
		temp = array[i];
		printf("Value checked array[%lu] = [%d]\n", i, temp);
		if (value == array[i])
			return (array[i]);
		i++;
	}
	return (-1);
}
