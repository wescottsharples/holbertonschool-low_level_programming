#include "holberton.h"

/**
 * _isdigit - checks if the input is a digit 0-9
 * @c: int to be checked
 * Return: 1 if 0-9, 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
