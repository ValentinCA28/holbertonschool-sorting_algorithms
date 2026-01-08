#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    /* Parcourir le tableau si il existe */
    while (array && i < size)
    {
        /* Ajouter une virgule avant chaque élément sauf le premier */
        if (i > 0)
            printf(", ");
        /* Afficher l'élément */
        printf("%d", array[i]);
        ++i;
    }
    /* Retour à la ligne après l'affichage du tableau */
    printf("\n");
}
