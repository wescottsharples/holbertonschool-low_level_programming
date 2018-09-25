#include "holberton.h"

/**
 * _puts - prints the value of a string to standard output.
 * @str: the string you want to print out
 * Return: None.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
