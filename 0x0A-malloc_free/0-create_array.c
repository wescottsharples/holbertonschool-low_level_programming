#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of specified 'size' initialized with 'c'
 * @size: the size of the array
 * @c: the character to initialize the array with
 * Return: NULL if size is zero, else pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = (char *)malloc(sizeof(char) * size);

	if (size <= 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
