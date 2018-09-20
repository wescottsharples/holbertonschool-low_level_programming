#include "holberton.h"

/**
 * print_square - prints a square.
 * @size: specifies the dimebnsions of square
 * Return: None.
 */
void print_square(int size)
{
	int i;
	int j = size;

	while (size > 0)
	{
		for (i = j; i > 0; i--)
		{
			_putchar('#');
		}

		if (size > 1)
			_putchar('\n');

	size--;
	}

	_putchar ('\n');
}
