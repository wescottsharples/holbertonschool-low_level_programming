#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int count;

	current = h;
	count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
