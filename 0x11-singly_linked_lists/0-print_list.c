#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a 'list_t' list.
 * @h: the head node of list
 *
 * Return: Number of nodes in list.
 */
size_t print_list(const list_t *h)
{
	int node_count = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
	}

	return (node_count);
}
