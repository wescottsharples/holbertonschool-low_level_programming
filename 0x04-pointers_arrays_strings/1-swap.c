#include "holberton.h"

/**
 * swap_int - swaps the value of the variables held in pointers
 * a and b.
 * @a: pointer holding the first int to be swapped
 * @b: pointer holding the second int to be swapped
 * Return: None.
 */
void swap_int(int *a, int *b)
{
	unsigned long i;

	i = *a;

	*a = *b;
	*b = i;;
}
