#include "holberton.h"

/**
 * _strpbrk - locates first occurence of char set in 's'.
 * @s: the string to find matches in
 * @accept: the string to be matched to
 * Return: Pointer to first byte that matches.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}

	return (0);
}
