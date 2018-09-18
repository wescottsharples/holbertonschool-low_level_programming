#include "holberton.h"

/**
 * print_single_digit - prints a single digit numerical character.
 * @k: Single digit int that you want to print
 * Return: none.
 */
void print_single_digit(int k)
{
	if (k <= 9)
	{
		_putchar(k + '0');
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
				print_single_digit(k);
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
