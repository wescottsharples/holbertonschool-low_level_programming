#include "holberton.h"

/**
 * print_single_digit - print the digit for a single digit number.
 *
 * None.
 */
void print_single_digit(void)
{
	if (k <= 9)
	{
		_putchar(k + '0');
		_putchar(',');
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
	}
}

/**
 * print_multiple_digit - printing a multi-digit character.
 *
 * Return: none
 */
void print_multiple_digit(void)
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
					print_single_digit();
				}
				else
				{
					print_multiple_digit();
				}
			}

			_putchar('\n');


		}
	}
}
