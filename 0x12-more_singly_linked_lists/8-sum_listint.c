#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Sums all ints within 'listint_t' list.
 * @head: the head node of list
 *
 * Return: Sum of ints from list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
