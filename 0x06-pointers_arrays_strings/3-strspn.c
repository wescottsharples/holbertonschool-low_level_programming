#include "holberton.h"

/**
 * _strspn - check if characters in 'accept' appear in 's'.
 * @s: the strin to be looped through for matches
 * @accept: the characters to be matches to
 * Return: Number of times 'accept' chars appear in 's' prefix.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, matches, old_matches;

	matches = 0;

	for (i = 0; *(s + i); i++)
	{
		old_matches = matches;

		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				matches++;
		}

		if (matches == old_matches)
			break;
	}

	return (matches);
}
