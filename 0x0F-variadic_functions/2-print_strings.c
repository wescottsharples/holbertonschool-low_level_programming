#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 *
 * Return: None.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *string = va_arg(args, char *);

		if (!string)
			string = "(nil)";

		printf("%s", string);

		if (separator && i < (n - 1))
			printf("%s", separator);
	}

	va_end(args);
	putchar('\n');
}
