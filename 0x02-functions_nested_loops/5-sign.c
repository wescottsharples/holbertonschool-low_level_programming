#include "holberton.h"

/**
 * print_sign - checks the sign of a function and then prints that sign.
 * @n: An integer that will be checked for a positive, negative, or zero sign
 * Return: Always 1, 0, or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
