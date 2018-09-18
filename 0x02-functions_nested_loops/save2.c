#include "holberton.h"

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (j != 9)
			{
				if (k <= 9)
				{
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (k <= 9)
				{
					_putchar(k + '0');
				}
				else
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
		}

		_putchar('\n');
	}
}
