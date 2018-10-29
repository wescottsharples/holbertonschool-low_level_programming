#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of 'listint_t' list.
 * @h: the head node of list
 *
 * Return: Number of nodes in list.
 */
size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
