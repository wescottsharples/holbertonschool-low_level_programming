#include "holberton.h"

/**
 * _memcpy - copies n bytes of one buffer to another
 * @dest: the destination buffer to be copied to
 * @src: the buffer to be copied from
 * @n: number of bytes to be copied over
 * Return: pointer to destination string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
