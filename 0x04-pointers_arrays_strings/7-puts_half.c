#include "holberton.h"

/**
 * puts_half - prints the latter half of a string.
 * @str: the string you want to print half of
 * Return: None.
 */
void puts_half(char *str)
{
	int i;

	while (*(str + i) != '\0')
		i++;

	i = ((i + 1) / 2);

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
