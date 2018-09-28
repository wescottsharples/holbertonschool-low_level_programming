#include "holberton.h"

/**
 * _strncat - concatenate two strings.
 * @n: the number of elements to be concatenated.
 * @src: the source of conatenation
 * @dest: the destination of concatenation
 * Return: Concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i])
		i++;

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
