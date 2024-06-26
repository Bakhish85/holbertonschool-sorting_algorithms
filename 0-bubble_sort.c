#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * bubble_sort - Calls function
 * @array: Array to be sorted
 * @size: Size of array
 * Description: Function that sorts an array using the bubble sort method
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int tmpe;
	size_t i, j;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmpe = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmpe;
				print_array(array, size);
			}
		}
	}
}
