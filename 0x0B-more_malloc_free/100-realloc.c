#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates the memory of block using malloc and free.
 * @ptr: pointer to the old block of memory
 * @old_size: size of the old block of memory
 * @new_size: size the new block of memory should be
 * Return: New pointer to new block of memory if new_size differs from old_size
 * or ptr if new_size is equal to old_size
 * or NULL if new_size is zero and ptr is not NULL
 * else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *buffer, *c_ptr;

	/* Return pointer if no change must be made */
	if (new_size == old_size)
		return (ptr);

	/* Free ptr and return NULL if new_size is 0 and ptr is not NULL */
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	/* Set new char pointer to the same element as ptr */
	c_ptr = ptr;

	/* Allocate memory for pointer of new block */
	buffer = malloc(new_size);
	if (!buffer)
		return (NULL);

	/* Return buffer if pointer is NULL */
	if (!ptr)
		return (buffer);

	/* Set new block memory to old block memory */
	for (i = 0; i < old_size && i < new_size; i++)
	{
		buffer[i] = c_ptr[i];
	}

	/* Type cast new pointer back to void */
	buffer = (void *) buffer;

	free(ptr);
	return (buffer);
}
