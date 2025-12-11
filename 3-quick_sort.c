#include "sort.h"

/**
* swap_node - Swaps the values of two integers using their pointers.
*
* This function exchanges the values pointed to by node1 and node2.
* It uses a temporary variable to hold one value during the swap.
* @node1: Pointer to the first integer.
* @node2: Pointer to the second integer.
*/
void swap_node(int *node1, int *node2)
{
	int temp = *node1;
	*node1 = *node2;
	*node2 = temp;
}

/**
* partition - Partitions the array around a pivot for QuickSort.
* @array: The array to partition.
* @min: The starting index of the subarray.
* @max: The ending index of the subarray.
* @size: Elements of array
* Return: The final index of the pivot.
*/
int partition(int array[], int min, int max, size_t size)
{
	int j;
	int pivot = array[max];
	int i = min - 1;

	for (j = min; j < max; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap_node(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[max])
	{
		swap_node(&array[i + 1], &array[max]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
* quicksort_index - Recursively sorts a subarray using QuickSort.
* @array: The array to sort.
* @min: The starting index of the subarray.
* @max: The ending index of the subarray.
* @size: Elements of array
*/
void quicksort_index(int *array, int min, int max, size_t size)
{
	if (min < max)
	{
		int pivot_index = partition(array, min, max, size);

		quicksort_index(array, min, pivot_index - 1, size);
		quicksort_index(array, pivot_index + 1, max, size);
	}
}

/**
* quick_sort - Sorts an array of integers using QuickSort.
* @array: The array of integers to sort.
* @size: The number of elements in the array.
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort_index(array, 0, (int)size - 1, size);
}
