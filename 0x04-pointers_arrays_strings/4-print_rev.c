#include "holberton.h"

/**
 * reset_to_98 - updates the value of n's variable to 98.
 *
 * Return: None.
 */
void print_rev(char *s)
{
	int i, j;

	while (*(s + j) != '\0')
		j++;

	j -= 1;

	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
