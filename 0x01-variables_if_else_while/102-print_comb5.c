#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_1;
	int digit_2;
	int digit_3;
	int digit_4;

	for (digit_1 = 48 ; digit_1 <= 56 ; digit_1++)
	{
		for (digit_2 = digit_1 + 1 ; digit_2 <= 57 ; digit_2++)
		{
			for (digit_3 = 48 ; digit_3 <= 57 ; digit_3++)
			{
				for (digit_4 = 48 ; digit_4 <= 57 ; digit_4++)
				{
					putchar(digit_4);
				}

				putchar(digit_3);
			}

			putchar(digit_1);
			putchar(digit_2);

			if ((digit_1 == 56) && (digit_2 == 57))
			{
				continue;
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');

	return (0);
}
