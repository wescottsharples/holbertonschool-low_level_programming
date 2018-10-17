#include "function_pointers.h"

/**
 * op_add - adds two ints
 * @a: the first integer
 * @b: the second integer
 * Return: Sum of 'a' and 'b'.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: the first integer
 * @b: the second integer
 * Return: Difference of 'a' and 'b'.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: the first integer
 * @b: the second integer
 * Return: Product of 'a' and 'b'.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: the first integer
 * @b: the second integer
 * Return: Quotient of 'a' and 'b'.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes modulus of two ints
 * @a: the first integer
 * @b: the second integer
 * Return: Modulus of 'a' and 'b'.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
