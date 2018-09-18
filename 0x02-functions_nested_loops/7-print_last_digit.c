#include "holberton.h"

/**
 * print_last_digit - displays the last digit of input.
 * @i: An integer variable that we are finding the last digit of
 * Return: The last digit of input integer.
 */
int print_last_digit(int i)
{
	int last;

	last = (i % 10);

	if (last < 0)
	{
		last = last * (-1);
		_putchar(last + '0');
		return (last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
