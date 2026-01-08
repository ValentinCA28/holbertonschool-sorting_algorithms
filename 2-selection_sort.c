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
	size_t minIdx;
	int temp;
	size_t i, j;

	/* Parcourir chaque position du tableau */
	for (i = 0; i < size - 1; i++)
	{
		/* Considérer la position actuelle comme le minimum */
		minIdx = i;

		/* Chercher le plus petit élément dans la partie non triée */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIdx])
				minIdx = j; /* Mettre à jour l'index du minimum */
		}

		/* Si un élément plus petit a été trouvé, l'échanger */
		if (minIdx != i)
		{
			temp = array[i];
			array[i] = array[minIdx];
			array[minIdx] = temp;

			print_array(array, size); /* Afficher après l'échange */
		}
	}
}
