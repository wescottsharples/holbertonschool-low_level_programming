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
	unsigned int i, j, temp;

	for (i = 0; *(haystack + i); i++)
	{
			for (temp = i, j = 0; *(needle + j)
			&& *(haystack + temp); temp++, j++)
			{
				if (haystack[temp] != needle[j])
					break;
			}

			if (needle[j] == '\0')
				return (haystack + i);
	}

	return (0);
}
