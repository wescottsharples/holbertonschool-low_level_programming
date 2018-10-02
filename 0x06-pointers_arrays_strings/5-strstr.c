#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - checks for a string within a string
 * @haystack: the string to be checked
 * @needle: the string we are checking for
 * Return: The byte where 'needle' first appears in 'haystack'
 * or NULL if we do not find 'needle'.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(haystack + i); i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; *(needle + j); j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}

			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}

	return (0);
}
