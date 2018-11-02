#include "holberton.h"

/**
 * get_bit - Returns the value of bit at a given index.
 * @n: the integer to find the bit of
 * @index: the index where bit is found
 *
 * Return: Value of bit at index, else -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	if (index <= 32)
		return (k);
	k = (n >> index) & 1;
	return (k);
}
