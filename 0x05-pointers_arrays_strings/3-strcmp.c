#include "holberton.h"

/**
 * _strcmp - compares the length of two strings.
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: -15 if s1 < s2
 * 15 is s1 > s2
 * 0 if s1 == s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;

	if ((s1[i] - s2[i]) > 0)
		return (s1[i] - s2[i]);
	else if ((s2[i] - s1[i]) > 0)
		return (s1[i] - s2[i]);
	else
		return (0);
}
