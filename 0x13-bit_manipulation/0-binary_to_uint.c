#include "holberton.h"

/**
 * binary_to_uint - function converts binary number to unsigned int
 * @b: pointer to binary number in string format
 *
 * Return: Converted number, else 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, mul;
	unsigned int sum;

	i = 0;
	mul = 0;
	sum = 0;

	if (!b)
		return (0);

	while (b[i])
		i++;

	i--;
	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		sum += (b[i] - '0') * (1 << mul);
		mul++;
		i--;
	}

	return (sum);
}
