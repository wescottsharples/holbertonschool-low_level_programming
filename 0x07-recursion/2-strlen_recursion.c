#include "holberton.h"

/**
 * _strlen_recursion - counts the length of
 * string using recursion
 * @s: the string to be counted
 * Return: Length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	return (0);
}
