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
	/* Échanger les valeurs de deux entiers */
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
	int pivot = array[max]; /* Choisir le dernier élément comme pivot */
	int i = min - 1; /* Index du plus petit élément */

	/* Parcourir le sous-tableau */
	for (j = min; j < max; j++)
	{
		/* Si l'élément est plus petit que le pivot */
		if (array[j] < pivot)
		{
			i++; /* Incrémenter l'index du plus petit élément */
			/* Échanger si les indices sont différents et les valeurs aussi */
			if (i != j && array[i] != array[j])
			{
				swap_node(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	/* Placer le pivot à sa position finale */
	if ((i + 1) != max && array[i + 1] != array[max])
	{
		swap_node(&array[i + 1], &array[max]);
		print_array(array, size);
	}
	return (i + 1); /* Retourner la position finale du pivot */
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
	/* Si le sous-tableau contient plus d'un élément */
	if (min < max)
	{
		/* Partitionner et obtenir l'index du pivot */
		int pivot_index = partition(array, min, max, size);

		/* Trier récursivement la partie gauche (avant le pivot) */
		quicksort_index(array, min, pivot_index - 1, size);
		/* Trier récursivement la partie droite (après le pivot) */
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
	/* Si le tableau est NULL ou a moins de 2 éléments, rien à trier */
	if (array == NULL || size < 2)
		return;
	/* Lancer le tri rapide sur tout le tableau */
	quicksort_index(array, 0, (int)size - 1, size);
}
