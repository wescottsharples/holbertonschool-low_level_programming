#include "holberton.h"

int wildcard(char *s1, char *s2);

/**
 * wildcmp - check if two strings are identical
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: If identical then 1, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if ((*(s1) == '\0') && (*(s2) == '\0'))
		return (1);
	else if ((*(s1) == *(s2)) && (*(s1)) && (*(s2)))
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

/**
 * wildcard - checks wildcard
 * @s1: first string
 * @s2: second string
 * Return: 1
 */
int wildcard(char *s1, char *s2)
{
	if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		return (1);
	if (*(s1 + 1) && (*(s2)))
		return (0);
}
