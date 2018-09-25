#include "holberton.h"

/**
 * _strcpy - copties a string to another string.
 * @dest: the string you want to copy to
 * @src: the string that you want to copy from
 * Return: The pointer to dest string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
