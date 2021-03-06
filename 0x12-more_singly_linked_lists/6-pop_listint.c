#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes head of 'listint_t' list.
 * @head: the head node of list
 *
 * Return: Data from freed head.
 */
int pop_listint(listint_t **head)
{
	int head_data = 0;
	listint_t *tmp;

	if (head && *head)
	{
		tmp = (*head)->next;
		head_data = (*head)->n;
		free(*head);
		(*head) = tmp;
	}

	return (head_data);
}
