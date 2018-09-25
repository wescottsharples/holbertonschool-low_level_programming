#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copties a string to another string.
 * @dest: the string you want to copy to
 * @src: the string that you want to copy from
 * Return: The pointer to dest string.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	return (dest);
}
