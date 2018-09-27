#include "holberton.h"

/**
 * _strncpy - copies one strin to another.
 * @dest: the destination of copy
 * @src: the source of copy
 * @n: the number of characters to be copied
 * Return: Destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
