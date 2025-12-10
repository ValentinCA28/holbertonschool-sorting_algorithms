#include "sort.h"

/**
 * swap_nodes - Swaps two adjacent nodes in a doubly linked list
 * @list: Pointer to the head of the list (to update if head changes)
 * @node1: First node (will become after node2 after swap)
 * @node2: Second node (will become before node1 after swap)
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (!node1 || !node2)
		return;

	if (node1->prev)
		node1->prev->next = node2;
	node2->prev = node1->prev;
	node1->prev = node2;
	node1->next = node2->next;
	if (node2->next)
		node2->next->prev = node1;
	node2->next = node1;

	if (!node2->prev)
		*list = node2;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insertion;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		insertion = current;
		current = current->next;
		while (insertion->prev && insertion->n < insertion->prev->n)
		{
			swap_nodes(list, insertion->prev, insertion);
			print_list(*list);
		}
	}
}
