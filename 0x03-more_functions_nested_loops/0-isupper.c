#include "holberton.h"

/**
 * _isupper - checks if the input is an uppercase letter
 * @c: integer to be checked
 * Return: 1 if upper, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
