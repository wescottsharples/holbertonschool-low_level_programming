#include "holberton.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: the base to be raised
 * @y: the power to raise to
 * Return: Result if y > 0
 *         1 if y == 0
 *	  -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x *= _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
