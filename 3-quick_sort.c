#include "sort.h"
/**
 * quick_sort - Function that sorts an array based on
 * quick sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 * Return: 0
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot;

	if (!array || size < 2)
		return;
	print_sort(array, size, 1);
	/* partition and get pivot index */
	pivot = partition(array, size);

	/* repeat for left of index */
	quick_sort(array, pivot);
	/* repeat for index and right */
	quick_sort(array + pivot, size - pivot);
}

