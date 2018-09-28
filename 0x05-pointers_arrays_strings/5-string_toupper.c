#include "holberton.h"

/**
 * string_toupper - converts all a string to all uppercase.
 * @s: the string to be converted
 * Return: The uppercase string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		else
			continue;
	}

	return (s);
}
