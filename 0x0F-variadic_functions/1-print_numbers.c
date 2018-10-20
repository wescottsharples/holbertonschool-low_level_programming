#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: the string between the printed numbers
 * @n: the number of integers passed to the function
 *
 * Return: None.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, unsigned int);
		printf("%d", value);

		if (separator && i < (n - 1))
			printf("%s", separator);
	}

	putchar('\n');
}
