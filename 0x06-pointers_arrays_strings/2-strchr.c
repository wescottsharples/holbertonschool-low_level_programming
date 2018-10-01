#include "holberton.h"

/**
 * _strchr - finds the first instance of char 'c'
 * in string 's'
 * @s: the string to be searched
 * @c: the character searched for
 * Return: Pointer to first instance of 'c' in 's'
 * or NULL if no instances are found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) <= '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (0);
}
