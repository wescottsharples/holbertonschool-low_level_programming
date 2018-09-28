#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 * Return: None.
 */
void print_number(int n)
{
	if (n % 10 == 0)
	{
		print_number(n / 10);
		n = n % 10;

		if (n < 0)
			n = n * -1;
	}
	else
	{
		_putchar('-');
		n = n * -1;
	}

	_putchar(n + '0');
}
