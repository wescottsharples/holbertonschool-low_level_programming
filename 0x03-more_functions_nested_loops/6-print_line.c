#include "holberton.h"

/**
 * print_line - print underscore n times
 * @n: number of times to print underscore
 * Return: Always 0.
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
