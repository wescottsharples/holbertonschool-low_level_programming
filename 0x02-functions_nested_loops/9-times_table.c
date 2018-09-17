#include "holberton.h"

void times_table(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		int j = i * 9;
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		_putchar('\n');
	}
}
