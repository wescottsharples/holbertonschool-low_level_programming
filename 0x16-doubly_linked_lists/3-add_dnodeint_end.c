#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of doubly linked list
 * @head: double pointer to the head node of doubly linked list
 * @n: the integer to be stored in the newly created node
 *
 * Return: Pointer to the newly created node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (!head)
		return (NULL);

	current = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	while (current && current->next)
		current = current->next;

	new->n = n;
	new->prev = current;
	new->next = NULL;
	if (current)
		current->next = new;
	else
		*head = new;

	return (new);
}
