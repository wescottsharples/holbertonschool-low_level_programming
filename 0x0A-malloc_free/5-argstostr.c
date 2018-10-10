#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copies a string
 * @sent: d
 * @ac: d
 * @av: d
 * Return: Nothing.
 */
void _strcpy(char *sent, int ac, char **av)
{
	int i, j, k;

	j = k = 0;

	for (i = 0; i < ac; i++, k++)
	{
		while (av[i][j])
		{
			sent[k] = av[i][j];
			j++;
			k++;
		}

		sent[k] = '\n';
		j = 0;
	}

	sent[k] = '\0';
}

/**
 * argstostr - d
 * @ac: d
 * @av: d
 * Return: Pointer to sent, else NULL.
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	char *sent;

	_strcpy(sent, ac, av);
	return (sent);
}
