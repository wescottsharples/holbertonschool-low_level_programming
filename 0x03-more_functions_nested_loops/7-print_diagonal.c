#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of times to print the back slash
 * Return: None.
 */
void print_diagonal(int n)
{
	int i, j = n;

	while (n > 0)
	{
		i = j;
		i -= n;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}

		_putchar('\\');

		if (n > 1)
			_putchar('\n');

		n--;
	}

	_putchar('\n');
}
