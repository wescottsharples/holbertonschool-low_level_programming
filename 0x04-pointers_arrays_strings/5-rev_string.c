#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string we are reversing
 * Return: None.
 */
void rev_string(char *s)
{
	int i, j, k;
	char c;

	while (*(s + i) != '\0')
		i++;

	i -= 1;

	k = 0;

	for (j = i; j > k; j--)
	{
		c = s[k];
		s[k] = s[j];
		k++;
		s[j] = c;
	}
}
