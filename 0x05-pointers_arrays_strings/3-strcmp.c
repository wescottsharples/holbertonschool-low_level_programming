#include "holberton.h"

/**
 * _strcmp - compares the length of two strings.
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: -15 if s1 < s2
 * 15 is s1 > s2
 * 0 if s1 == s2.
 */
int _strcmp(char *s1, char *s2)
{
	int len_1, len_2;

	len_1 = 0;
	len_2 = 0;


	while (*(s1 + len_1) != '\0')
		len_1++;

	len_1 -= 1;

	while (*(s2 + len_2) != '\0')
		len_2++;

	len_2 -= 1;

	if (len_1 == len_2)
	{
		return (0);
	}
	else if (len_2 > len_1)
	{
		return (-15);
	}
	else if (len_1 > len_2)
	{
		return (15);
	}
	else
	{
		return (2);
	}
}
