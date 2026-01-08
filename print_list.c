#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    /* Parcourir la liste chaînée */
    while (list)
    {
        /* Ajouter une virgule avant chaque élément sauf le premier */
        if (i > 0)
            printf(", ");
        /* Afficher la valeur du nœud */
        printf("%d", list->n);
        ++i;
        /* Passer au nœud suivant */
        list = list->next;
    }
    /* Retour à la ligne après l'affichage de la liste */
    printf("\n");
}
