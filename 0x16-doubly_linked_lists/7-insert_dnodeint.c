#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node a a given position
 * @h: double pointer to the head node of linked list
 * @idx: numerical index of node to be inserted starting from 0
 * @n: int to be stored inside newly created node
 *
 * Return: Pointer to the newly created node on success, NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int count;

	current = *h;
	count = 0;

	while (current && count <= idx)
	{
		if (count == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);

			new->n = n;
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			if (idx == 0)
				*h = new;

			return (new);
		}

		current = current->next;
		count++;
	}

	return (NULL);
}
