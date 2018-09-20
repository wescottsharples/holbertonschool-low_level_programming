#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle's base
 * Return: None.
 */
void print_triangle(int size)
{
	int a, b, space;
	int i = size;

	while (i > 0)
	{
		space = (i - 1);

		for (a = 0; a < space; a++)
			_putchar(' ');

		for (b = 0; b < (size - space); b++)
			_putchar('#');

		if (i > 1)
			_putchar('\n');

		i--;
	}

	_putchar('\n');
}
