#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copy of the string given as a parameter
 * @str: the string to be copied
 * Return: NULL if string is NULL, else pointer to copied string
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	unsigned int len, i;

	for (len = 0; str[len]; len++)
		;

	char *cpy = malloc(sizeof(char) * (len + 1));

	for (i = 0; str[i]; i++)
		cpy[i] = str[i];

	return (cpy);
}
