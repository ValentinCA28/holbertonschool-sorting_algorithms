# Sorting Algorithms

This project is part of the Holberton School curriculum and focuses on implementing various sorting algorithms in C. It provides an opportunity to understand the mechanics, efficiency, and time complexity of different sorting techniques.

## Description

Sorting algorithms are fundamental to computer science and are used to rearrange elements in a specific order (ascending or descending). This project implements several classic sorting algorithms and analyzes their performance using Big O notation.

## Learning Objectives

- Understand at least four different sorting algorithms
- Learn about Big O notation and how to evaluate algorithm time complexity
- Learn how to select the best sorting algorithm for a given input
- Understand what a stable sorting algorithm is

## Project Structure

```
holbertonschool-sorting_algorithms/
├── sort.h                      # Header file with function prototypes and structures
├── print_array.c               # Helper function to print arrays
├── print_list.c                # Helper function to print linked lists
├── 0-bubble_sort.c             # Bubble Sort implementation
├── 0-O                         # Bubble Sort time complexity
├── 1-insertion_sort_list.c     # Insertion Sort implementation (linked list)
├── 1-O                         # Insertion Sort time complexity
├── 2-selection_sort.c          # Selection Sort implementation
├── 2-O                         # Selection Sort time complexity
├── 3-quick_sort.c              # Quick Sort implementation
├── 3-O                         # Quick Sort time complexity
└── README.md                   # Project documentation
```

## Implemented Algorithms

### 0. Bubble Sort
- **File**: `0-bubble_sort.c`
- **Prototype**: `void bubble_sort(int *array, size_t size);`
- **Description**: Sorts an array of integers in ascending order using the Bubble Sort algorithm
- **Time Complexity**:
  - Best case: O(n)
  - Average case: O(n²)
  - Worst case: O(n²)

### 1. Insertion Sort
- **File**: `1-insertion_sort_list.c`
- **Prototype**: `void insertion_sort_list(listint_t **list);`
- **Description**: Sorts a doubly linked list of integers in ascending order using the Insertion Sort algorithm
- **Time Complexity**:
  - Best case: O(n)
  - Average case: O(n²)
  - Worst case: O(n²)

### 2. Selection Sort
- **File**: `2-selection_sort.c`
- **Prototype**: `void selection_sort(int *array, size_t size);`
- **Description**: Sorts an array of integers in ascending order using the Selection Sort algorithm
- **Time Complexity**:
  - Best case: O(n²)
  - Average case: O(n²)
  - Worst case: O(n²)

### 3. Quick Sort
- **File**: `3-quick_sort.c`
- **Prototype**: `void quick_sort(int *array, size_t size);`
- **Description**: Sorts an array of integers in ascending order using the Quick Sort algorithm with Lomuto partition scheme
- **Time Complexity**:
  - Best case: O(n log n)
  - Average case: O(n log n)
  - Worst case: O(n²)

## Data Structures

The project uses the following data structure for doubly linked lists:

```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Compilation

All files are compiled on Ubuntu 20.04 LTS using gcc with the following flags:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o <output_name>
```

### Example Compilation Commands

**Bubble Sort:**
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
```

**Insertion Sort:**
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-insertion_sort_list.c 1-main.c print_list.c -o insertion
```

**Selection Sort:**
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 2-selection_sort.c 2-main.c print_array.c -o select
```

**Quick Sort:**
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-quick_sort.c 3-main.c print_array.c -o quick
```

## Usage

Each algorithm prints the array or list after each swap operation, allowing you to visualize the sorting process step by step.

### Example

```c
#include "sort.h"

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```

## Big O Notation Files

Each algorithm has an associated file (format: `X-O`) containing its time complexity for three cases:
- Line 1: Best case time complexity
- Line 2: Average case time complexity
- Line 3: Worst case time complexity

Example format:
```
O(n)
O(n^2)
O(n^2)
```

## Requirements

- All files are compiled on Ubuntu 20.04 LTS
- Code follows the Betty style (checked using betty-style.pl and betty-doc.pl)
- No global variables are used
- Maximum of 5 functions per file
- Standard library functions like `printf`, `puts`, etc. are allowed
- The prototypes of all functions are included in the header file `sort.h`
- All header files are include guarded

## Author

This project is part of the Holberton School curriculum.

## Resources

- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation](https://en.wikipedia.org/wiki/Big_O_notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg)

## License

This project is part of the Holberton School curriculum and is for educational purposes.
