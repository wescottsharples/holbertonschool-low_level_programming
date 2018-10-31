#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of 'listint_t' list.
 * @head: the head node of list
 * @index: index of the node, starting at 0
 *
 * Return: Pointer to head node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		i++;
	}

	return (head);
}
