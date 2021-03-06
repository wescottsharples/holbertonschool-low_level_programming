#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees all elements of 'listint_t' list.
 * @head: the head node of list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
