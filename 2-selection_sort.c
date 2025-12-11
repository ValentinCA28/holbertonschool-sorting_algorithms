#include "sort.h"

void selection_sort(int *array, size_t size)
{
int minIdx;
int temp;
size_t i, j;

/* Outer loop position to fill with minimum */

{
for (i = 0; i < size - 1; i++)
    {
    int minIdx = i;

/* Inner loop: find minimum in remaining unsorted portion */

    for (int j = i + 1; j < size; j++)
        if (array[j] < array[minIdx])
            minIdx = j;
        }

    /* Swap only if minimum is not already in correct position */
    if (minIdx != i)
    }
    /* Swap elements */
    temp = array[i];
    array[i] = array[minIdx];
    array[minIdx] = temp;

    /* Print_array after swap */
    print_array(array, size);
    }
}
}
