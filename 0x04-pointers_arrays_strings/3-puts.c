#include "holberton.h"

/**
 * _puts - prints the value of a string to standard output.
 * @str: the string you want to print out
 * Return: None.
 */
void _puts(char *str)
{
	_putchar(*str);

	while (*str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
