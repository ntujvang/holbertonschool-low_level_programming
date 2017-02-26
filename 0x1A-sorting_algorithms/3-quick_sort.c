#include "sort.h"

/**
 * hoare_partition - the hoare partition scheme that pivots digits
 * @array: the array
 * @lo: lowest index
 * @hi: highest index
 * @size: size of whole array
 * Return: a number
 */
int hoare_partition(int *array, int lo, int hi, size_t size)
{
	int pivot, temp, i, j;

	pivot = array[hi];
	i = lo - 1;
	j = hi + 1;
	while (1)
	{
		do
			i++;
		while (array[i] < pivot);
		do
			j--;
		while (array[j] > pivot);
		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
		else
			return (i);
	}
}

/**
 * hoare_qs - function that applies the Hoare partition scheme
 * @array: the array
 * @lo: lowest index
 * @hi: highest index
 * @size: size of whole array
 * Return: void
 */
void hoare_qs(int *array, int lo, int hi, size_t size)
{
	int pivot;

	if (lo < hi)
	{
		pivot = hoare_partition(array, lo, hi, size);
		hoare_qs(array, lo, pivot - 1, size);
		hoare_qs(array, pivot, hi, size);
	}
}

/**
 * quick_sort - function that calls the Hoare partition scheme
 * @array: the array
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	hoare_qs(array, 0, (int) (size - 1), size);
}
