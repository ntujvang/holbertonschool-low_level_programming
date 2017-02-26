#include "sort.h"

/**
 * selection_sort - function that replicates selection sort
 * @array: the array
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
        size_t i, j, min;
	int temp;

	i = 0;
	while (i < (size - 1))
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[i] && array[j] < array[min])
				min = j;
			j++;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
		i++;
	}
}
