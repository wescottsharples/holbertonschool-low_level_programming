#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints down or up to the number 98.
 * @n: The number that you want to start from and go to 98
 * Return: none.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}

			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}

			n++;
		}
	}
	else
	{
		printf("%d", n);
	}

	putchar('\n');
}
