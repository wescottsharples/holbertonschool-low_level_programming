#include "holberton.h"

/**
 * cap_string - converts all words in a string to all uppercase.
 * @s: the string to be converted
 * Return: The uppercased string.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
		&& (s[i - 1] == '!' || s[i - 1] == ' ' || s[i - 1] == ';' ||
		s[i - 1] == '"' || s[i - 1] == ',' || s[i - 1] == '.' ||
		s[i - 1] == '\n' || s[i - 1] == '?' || s[i - 1] == '(' ||
		s[i - 1] == '\t' || s[i - 1] == '}' || s[i - 1] == ')' ||
		s[i - 1] == '{'))
			s[i] = s[i] - 32;
		else if ((s[i] >= 'a' && s[i] <= 'z') && (i == 0))
			s[i] = s[i] - 32;
		else
			continue;
	}

	return (s);
}
