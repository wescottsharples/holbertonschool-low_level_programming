#include "holberton.h"

/**
 * print_rev - prints a string in reverse.
 * @s: the string you would like to print in reverse
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
