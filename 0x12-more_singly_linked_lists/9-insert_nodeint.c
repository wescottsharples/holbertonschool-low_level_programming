#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts node at index  of a 'listint_t' list.
 * @head: pointer to the head node of linked list
 * @idx: the index, starting from 0, where node should be inserted.
 * @n: the int to be inserted.
 *
 * Return: Address of new element, or NULL upon failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *iterate = NULL;

	if (*head)
	{
		iterate = *head;
		while (i <= idx)
		{
			if (iterate)
				iterate = iterate->next;
			else
				return (NULL);
		}
	}

	new = malloc(sizeof(size_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (iterate)
		iterate->next = new;
	if (!*head)
		*head = new;
	return (new);
}
