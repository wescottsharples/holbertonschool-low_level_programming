#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: number of bytes in each elemnt of array
 * Return: Pointer to allocated memory, else NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *buffer;

	/* Check if nmemb or size is 0 */
	if (!nmemb || !size)
		return (NULL);

	/* Initalize container array */
	buffer = malloc(sizeof(char *) * nmemb * size);
	if (!buffer)
		return (NULL);

	/* Type cast to char pointer */
	buffer = (char *) buffer;

	/* Set memory to zero */
	for (i = 0; i < (nmemb * size); i++)
		buffer[i] = 0;

	/* Type cast back to void pointer */
	buffer = (void *) buffer;

	return (buffer);
}
