#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print_anything - Struct maps data type to correct print function
 * @type: The character that represents the correct data type
 * @f: The print function that corresponds to the character
 */
typedef struct print_anything
{
	char *type;
	void (*f)(va_list);
} print_anything;

#endif /* _VARIADIC_FUNCTIONS_H_ */
