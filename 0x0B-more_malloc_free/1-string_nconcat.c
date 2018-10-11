#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenates first string and n-bytes of second string.
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: the number of bytes of second string to be concatenated
 * Return: Pointer to concatenated string, else NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i, j;
	char *concat;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	if (n > len_s2)
		n = len_s2;

	concat = malloc(sizeof(char) * (len_s1 + n + 1));
	if (!concat)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	return (concat);
}

/**
 * _strlen - returns the length of a string.
 * @s: the string
 * Return: String length.
 */
int _strlen(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i]; i++)
		len++;
	return (len);
}
