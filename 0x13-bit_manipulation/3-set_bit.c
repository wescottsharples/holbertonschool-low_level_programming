#include "holberton.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return -1;

	*n = *n | 1 << index;
	return (1);
}
