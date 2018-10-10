#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of specified 'size' initialized with 'c'
 * @size: the size of the array
 * @c: the character to initialize the array with
 * Return: NULL if size is zero, else pointer to array
 */
char *create_array(unsigned int size, char c)
{
	if (!size)
		return ('\0');

	unsigned int i = 0;
	char *str = (char *)malloc(sizeof(char) * size);

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
