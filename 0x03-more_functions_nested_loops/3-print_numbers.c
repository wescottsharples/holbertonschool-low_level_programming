#include "holberton.h"

/**
 * print_numbers - prints numbers 1-9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
