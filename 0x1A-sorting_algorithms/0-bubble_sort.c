#include "sort.h"
/**
 * bubble_sort - this function replicates bubble sort!
 * @array: the array
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	i = 0;
	temp = 0;
	if (size <= 1)
		return;
	while (i < size)
	{
		j = 0;
		while (j < (size - 1))
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
