#include "holberton.h"

/**
 * _memset - replaces n bytes in the memory
 * area pointed to by s with the constant b
 * @s: the memory address to be filled
 * @b: the constant byte to fill with
 * @n: n bytes of memory to be filled
 * Return: A pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
