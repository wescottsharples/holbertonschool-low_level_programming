#include "holberton.h"

/**
 * _isalpha - checks is the input is an alphabetical character.
 * @c: variable to check if the character is alpha
 * Return: Always 1 or 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
