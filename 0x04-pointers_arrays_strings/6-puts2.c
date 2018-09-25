#include "holberton.h"

/**
 * puts2 - prints every other character in a string.
 * @str: the string you want to print
 * Return: None.
 */
void puts2(char *str)
{
	int i, j;

	while (*(str + i) != '\0')
		i++;

	i -= 1;

	for (j = 0; j <= i; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
