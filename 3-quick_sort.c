#include "sort.h"



void swap_node(int *node1, int *node2)
{
	int temp = *node1;
	*node1 = *node2;
	*node2 = temp;
}

int partition_lomuto(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int i = low - 1;
    int j;

    for (j = low; j < high; j++)
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
    if (i + 1 != high)
    {
        swap_node(&array[i + 1], &array[high]);
        print_array(array, size);
    }
    return (i + 1);
}

void quicksort_lomuto(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pi = partition_lomuto(array, low, high, size);
        quicksort_lomuto(array, low, pi - 1, size);
        quicksort_lomuto(array, pi + 1, high, size);
    }
}

void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;
    quicksort_lomuto(array, 0, size - 1, size);
}