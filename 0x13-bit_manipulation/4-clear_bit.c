#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit at index to 0.
 * @n: the number to be analyzed
 * @index: where to set the bit to 0
 *
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(n) * 8) < index)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
