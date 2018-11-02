#include "holberton.h"

/**
 * print_binary - prints an int in binary
 * @n: the int to be converted
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	char c;

	if (n > 1)
		print_binary(n >> 1);
	c = (n & 1) + '0';
	_putchar(c);
}
