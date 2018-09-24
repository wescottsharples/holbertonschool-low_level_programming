#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string you want to return the length of
 * Return: Integer of string's length.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
