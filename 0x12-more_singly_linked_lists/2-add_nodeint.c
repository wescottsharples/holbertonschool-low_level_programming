#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a 'listint_t' list.
 * @head: pointer to the head node of linked list
 * @n: the int to be inserted.
 *
 * Return: Address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	if (*head && head)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	return (NULL);
}
