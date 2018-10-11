#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments and adds newline characters
 * @ac: the number of arguments
 * @av: the arguments stored in a 2D array
 * Return: Pointer to cancatenated string, else NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, c, len;
	char *str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);

	for (i = 0, c = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, c++)
			str[c] = av[i][j];
		str[c] = '\n';
		c++;
	}

	return (str);
}
