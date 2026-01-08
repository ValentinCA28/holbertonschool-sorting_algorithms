#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers
 * in ascending order using Bubble Sort
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 *
 * Description: Prints the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	/* Si le tableau est NULL ou a moins de 2 éléments, rien à trier */
	if (array == NULL || size < 2)
		return;

	/* Parcourir le tableau plusieurs fois */
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* Flag pour détecter si un échange a eu lieu */

		/* Comparer les éléments adjacents */
		for (j = 0; j < size - i - 1; j++)
		{
			/* Si l'élément actuel est plus grand que le suivant */
			if (array[j] > array[j + 1])
			{
				/* Échanger les deux éléments */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1; /* Marquer qu'un échange a eu lieu */
				print_array(array, size); /* Afficher le tableau après l'échange */
			}
		}
		/* Si aucun échange n'a eu lieu, le tableau est déjà trié */
		if (swapped == 0)
			break;
	}
}
