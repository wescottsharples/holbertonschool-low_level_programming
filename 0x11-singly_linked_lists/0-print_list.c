#include <stdio.h>
#include <stddef.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int node_count = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
	}

	return (node_count);
}
