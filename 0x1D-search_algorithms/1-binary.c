#include "search_algos.h"
/**
 * binary_search - replication of binary search algorithm
 * @array: pointer to first element of the array
 * @size: size of the array
 * @value: value searching for
 * Return: the vaule or -1 for fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, hold;

	left = 0;
	right = size - 1;
	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		hold = left;
		printf("Searching in array: ");
		while (hold < right)
		{
			printf("%d, ", array[hold]);
			hold++;
		}
		printf("%d\n", array[hold]);
		mid = (right + left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid;
		else
			left = mid + 1;
	}
	return (-1);
}
