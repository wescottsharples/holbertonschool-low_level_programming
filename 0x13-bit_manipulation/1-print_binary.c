#include "holberton.h"

/**
 * print_binary - prints an int in binary
 * @n: the int to be converted
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int k, c, flag;

	flag = 0;

	for (c = 31; c >= 0; c--)
	{
		k = n >> c;

		if (k & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || c == 0)
			_putchar('0');
	}
}
