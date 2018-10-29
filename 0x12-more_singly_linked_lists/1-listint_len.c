#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked 'listint_t' list.
 *
 * @h: address to the head node of list
 * Return: Number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int element_count = 0;

	while (h)
	{
		element_count++;
		h = h->next;
	}

	return (element_count);
}
