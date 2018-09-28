#include "holberton.h"

/**
 * _strcat - concatenate two strings.
 * @src: the source of conatenation
 * @dest: the destination of concatenation
 * Return: Concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
