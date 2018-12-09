#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function prints elements of doubly linked list
 * @h: the head node of linked list
 *
 * Return: The number of elements in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int count;

	current = h;
	count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
