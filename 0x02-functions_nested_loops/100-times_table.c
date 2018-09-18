#include "holberton.h"

/**
 * print_digits_with_space - print the digits with a space and comma
 * @k: the produce of i and j
 * @i: keeps track of rows
 * @j: keeps track of columns
 * None.
 */
void print_digits_with_space(int k, int i, int j)
{
	if (k <= 9)
	{
		_putchar(k + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');

		if ((i * (j + 1)) <= 9)
			_putchar(' ');
	}
	else if (k >= 100)
	{
		_putchar(((k / 10) / 10) + '0');
		_putchar(((k / 10) % 10) + '0');
		_putchar(k % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
		_putchar(',');
		_putchar(' ');

		if ((i * (j + 1)) <= 99)
			_putchar(' ');
	}
}

/**
 * print_multiple_digit - printing a multi-digit character.
 * @k: the product of i and j
 * Return: none
 */
void print_digits_only(int k)
{
	if (k <= 9)
	{
		_putchar(k + '0');
	}
	else if (k >= 100)
	{
		_putchar(((k / 10) / 10) + '0');
		_putchar(((k / 10) % 10) + '0');
		_putchar(k % 10 + '0');
	}
	else
	{
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
	}
}

/**
 * print_times_table - print the times table for any given number n.
 * @n: Integer that you want to print a times table for.
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (j != n)
				{
					print_digits_with_space(k, i, j);
				}
				else
				{
					print_digits_only(k);
				}
			}

			_putchar('\n');


		}
	}
}
