#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev, *next;
	unsigned int count;

	if (!head)
		return (-1);

	current = *head;
	count = 0;

	while (count <= index)
	{
		if (!current)
		{
			if (count == index)
			{
				prev->next = NULL;
				free (current);
				return (1);
			}
			else
				return (-1);
		}


		if (count == index)
		{
			if (index == 0)
			{
				*head = current->next;
				current->next->prev = NULL;
				free(current);
				return (1);
			}
			prev = current->prev;
			next = current->next;
			free(current);
			prev->next = next;
			next->prev = prev;
			return (1);
		}

		prev = current;
		current = current->next;
	}

	return (-1);
}
