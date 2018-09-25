#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - converts a string into an integer.
 * @s: the string to be converted
 * Return: Returns the integer from string
 * or 0 if no integers were found.
 */
int _atoi(char *s)
{
	unsigned int final = 0;
	int norp = 1;
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			norp = norp * -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			final = (final * 10) + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}

		i++;
	}

	return (norp * final);
}
