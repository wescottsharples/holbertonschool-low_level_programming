#include "holberton.h"

/**
 * factorial - calculates factorial of n
 * @n: the integer to calculate factorial of
 * Return: Factorial of n.
 */
int factorial(int n)
{
	if (n > 0)
		return (n *= factorial(n - 1));
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n);
}
