#include "holberton.h"

/**
 * helper - checks if an integer is a perfect square
 * @n: the integer to be checked
 * @root: the possible square root of 'n'
 * Return: root if perfect square, else -1.
 */
int helper(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);

	return (helper(n, root + 1));
}

/**
 * _sqrt_recursion - finds the square root of 'n'
 * @n: the integer to find square root of
 * Return: Root if perfect square, else -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (helper(n, 1));

	return (0);
}
