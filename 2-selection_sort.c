#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array using selection sort algorithm
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 *
 * Description: Sorts array in ascending order, prints after each swap
 */
void selection_sort(int *array, size_t size)
{
	int minIdx;
	int temp;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		minIdx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIdx])
				minIdx = j;
		}

		if (minIdx != i)
		{
			temp = array[i];
			array[i] = array[minIdx];
			array[minIdx] = temp;

			print_array(array, size);
		}
	}
}
