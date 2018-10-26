#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees linked 'list_t' list.
 * @head: pointer to the first node of linked list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = temp;
	}
}
