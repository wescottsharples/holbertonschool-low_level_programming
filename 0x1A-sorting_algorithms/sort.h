#ifndef __SORT_H__
#define __SORT_H__

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Sorting Function Prototypes */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Helper Function Prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void pivot(int *array, int low, int high, int size);
int partition(int *array, int low, int high, int size);
void swap(int *a, int *b);

#endif /* __SORT_H__ */
