#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a linked list using insertion sort
 * prints list after each swap
 *
 * @list: the linked list to be sorted
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *tmp;

	for (ptr = *list; ptr; ptr = ptr->next)
	{
		tmp = ptr;
		while (tmp->prev && (tmp->n < tmp->prev->n))
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (tmp->prev)
				tmp->prev->next = tmp;
			else
				*list = tmp;
			print_list(*list);
		}
	}
}
