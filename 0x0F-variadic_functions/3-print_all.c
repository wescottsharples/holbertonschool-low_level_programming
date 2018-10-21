#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_all - prints all arguments regardless of their type.
 * @format: a string listing in order the type of arguments passed
 *
 * Return: None.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, key;

	print_anything dictionary[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		key = 0;

		while (dictionary[key].type && format[i] != dictionary[key].type[0])
			key++;

		if (dictionary[key].type)
		{
			dictionary[key].f(args);
			if (format[i + 1])
				printf(", ");
		}

		i++;
	}

	va_end(args);
	printf("\n");
}

/**
 * print_char - prints a character
 * @args: the character to be printed
 *
 * Return: None.
 */
void print_char(va_list args)
{
	printf("%c", (char)va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: the integer to be printed
 *
 * Return: None.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: the floating point to be printed
 *
 * Return: None.
 */
void print_float(va_list args)
{
	printf("%f", (float)va_arg(args, double));
}

/**
 * print_string - prints a string or (nil)
 * @args: the string to be printed
 *
 * Return: None.
 */
void print_string(va_list args)
{
	char *string = va_arg(args, char *);

	switch ((int)!string)
	{
		case (1):
			printf("(nil)");
			break;
		default:
			printf("%s", string);
	}
}
