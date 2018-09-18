#include "holberton.h"

/**
 * _islower - checks if the input is a lowercase character.
 * @c: Integer that keeps track of character we are checking.
 * Return: Always 1 or 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
