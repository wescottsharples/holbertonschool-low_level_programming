#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function returns the number of elements in linked list
 * @h: the head node of linked list
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int count;

	current = h;
	count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}

	return (count);
}
