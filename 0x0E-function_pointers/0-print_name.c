#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: the name to be printed
 * @f: pointer to the function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;

	f(name);
}
