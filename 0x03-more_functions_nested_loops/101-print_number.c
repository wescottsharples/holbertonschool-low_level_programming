#include "holberton.h"

/**
 * print_number - prints the integer n.
 * @n: the integer to be printed
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	unsigned int un = n;

	while (n / 10 > 0)
	{
		_putchar(un / 10 + '0');
		n /= 10;

		if (un / 10 == 0)
			_putchar(un % 10 + '0');
	}
}
