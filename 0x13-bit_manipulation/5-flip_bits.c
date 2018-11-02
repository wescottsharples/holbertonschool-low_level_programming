#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: the number you are
 * @m: the number you wish you were
 *
 * Return: The number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int xor_val;

	xor_val = n ^ m;

	for (xor_val = n ^ m; xor_val; xor_val >>= 1)
		if (x & 1)
			i++;

	return (i);
}
