#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data inside doubly linked list
 * @head: pointer to the head node of linked list
 *
 * Return: The sum of ints contained within list.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
