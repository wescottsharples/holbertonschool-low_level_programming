#include "holberton.h"

/**
 * print_alphabet - prints the lowercase alphabet.
 *
 * Return: Not zero.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
