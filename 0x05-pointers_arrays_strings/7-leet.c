#include "holberton.h"

/**
 * leet - converts a string to leet.
 * @s: The string to be converted
 * Return: The converted string.
 */
char *leet(char *s)
{
	int i, j;
	char l33ters[11] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char letters[11] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = l33ters[j];
			}
		}
	}

	return (s);
}
