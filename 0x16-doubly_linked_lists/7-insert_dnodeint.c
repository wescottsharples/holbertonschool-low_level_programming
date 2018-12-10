#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insertion - inserts a new node
 * @current: the node to be inserted before
 * @n: int to be stored inside newly created node
 *
 * Return: Pointer to the newly created node on success, NULL on failure.
 */
dlistint_t *insertion(dlistint_t *current, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (current)
	{
		new->next = current;
		if (current->prev)
		{
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
		}
	}

	return (new);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head node of linked list
 * @idx: numerical index of node to be inserted starting from 0
 * @n: int to be stored inside newly created node
 *
 * Return: Pointer to the newly created node on success, NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *prev;
	unsigned int count;

	current = *h;
	count = 0;

	if (count == idx)
	{
		new = insertion(current, n);
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (current && count <= idx)
	{
		if (count == idx)
			return (insertion(current, n));

		prev = current;
		current = current->next;
		count++;
	}

	if (count == idx)
	{
		new = insertion(current, n);
		new->prev = prev;
		prev->next = new;
		return (new);
	}

	return (NULL);
}
