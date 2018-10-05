#include "holberton.h"

/**
 * check_factor - checks to see if 'fact' is
 * a factor of 'n'
 * @n: the number to be checked
 * @fact: the factor to check if it goes into 'n'
 * Return: If does not factor then 1, else 0.
 */
int check_factor(int n, int fact)
{
	if (n % fact == 0)
		return (0);
	if (fact == (n / 2))
		return (1);

	return (check_factor(n, fact + 1));
}

/**
 * is_prime_number - checks if 'n' is prime
 * @n: the number to be checked
 * Return: If prime then 1, else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_factor(n, 2));
}
