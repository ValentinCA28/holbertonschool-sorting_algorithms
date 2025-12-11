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
 * This function selects the last element (array[max]) as the pivot,
 * rearranges the subarray from min to max so that all elements smaller
 * than the pivot are to its left and larger to its right, and returns
 * the final index of the pivot. It uses the Lomuto partition scheme.
 * Note: There is a bug in the final swap; it should be array[i + 1]
 * instead of array[i] for correct pivot placement.
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
	if (i + 1 != max)
	{
		swap_node(&array[i + 1], &array[max]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort_index - Recursively sorts a subarray using QuickSort.
 * This helper function performs the recursive sorting on the subarray
 * defined by min and max indices. It calls partition to divide the array
 * and recurses on the left and right subarrays until the base case
 * (min >= max) is reached.
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
 * This is the main entry point for sorting the entire array in ascending
 * order using the QuickSort algorithm. It handles the initial check for
 * small arrays and calls the recursive helper with indices 0 to size-1.
 * The sorting is done in place, modifying the original array.
 * Time Complexity: Average O(n log n), worst O(n²).
 * Space Complexity: O(log n) due to recursion stack.
 * @array: The array of integers to sort.
 * @size: The number of elements in the array.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
        return;
	quicksort_index(array, 0, (int)size - 1, size);
}
