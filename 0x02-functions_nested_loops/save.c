#include "holberton.h"

/**
 * print_digits - prints the digits.
 * @k: Product of i and j
 * @i: Variable to keep track of rows
 * @j: Variable to keep track of columns
 * Return: none.
 */
void print_digits(int k, int i, int j)
{
	if (k <= 9)
	{
		_putchar(k + '0');
		_putchar(',');
		_putchar(' ');

		if ((i * (j + 1)) <= 9)
			_putchar(' ');
	}
	else
	{
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * times_table - prints the 9's times table
 *
 * Return: none.
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (j != 9)
			{
				print_digits(k, i, j);
			}
			else
			{
				if (k <= 9)
				{
					_putchar(k + '0');
				}
				else
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
		}

		_putchar('\n');
	}
}
