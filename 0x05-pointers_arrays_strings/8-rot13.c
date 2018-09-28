#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: The string to be encoded
 * Return: The encoded string.
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (((s[i] <= 'Z') && (s[i] >= 'N')) ||
		((s[i] <= 'z') && (s[i] >= 'n')))
		{
			s[i] = s[i] - 13;
			i++;
		}
		else if (((s[i] >= 'A') && (s[i] < 'N')) ||
		((s[i] >= 'a') && (s[i] < 'n')))
		{
			s[i] = s[i] + 13;
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}

	return (s);
}
