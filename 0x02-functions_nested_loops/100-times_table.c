#include "holberton.h"

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (j != n)
				{
					if (k <= 9)
					{
						_putchar(k + '0');
						_putchar(',');
						_putchar(' ');
					}
					else if (k >= 100)
					{
						_putchar(((k / 10) / 10) + '0');
						_putchar(((k / 10) % 10) + '0');
						_putchar(k % 10 + '0');
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
					else if (k >= 100)
					{
						_putchar(((k / 10) / 10) + '0');
						_putchar(((k / 10) % 10) + '0');
						_putchar(k % 10 + '0');
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
}
