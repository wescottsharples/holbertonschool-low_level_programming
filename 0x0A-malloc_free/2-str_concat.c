#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @str: the string to be analyzed
 * Return: Length of string.
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Pointer to the concatenated string, else NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0;
	char *s3 = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];

	while (s2[j])
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	if (s3 == NULL)
		return (NULL);

	return (s3);
}
