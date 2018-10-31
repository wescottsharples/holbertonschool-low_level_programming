#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds node to end of 'listint_t' list.
 * @head: the head node of the list
 * @n: the integer contained within new node
 *
 * Return: Pointer to newly created node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = NULL;

	if (!*head)
		return (NULL);

	if (*head)
	{
		last = *head;
		while (last->next)
			last = last->next;
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (last)
		last->next = new;
	if (!*head)
		*head = new;
	return (new);
}
