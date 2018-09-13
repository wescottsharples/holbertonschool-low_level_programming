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

	for (digit_1 = 48 ; digit_1 <= 55 ; digit_1++)
	{
		for (digit_2 = digit_1 + 1 ; digit_2 <= 56 ; digit_2++)
		{
			putchar(digit_1);
			putchar(digit_2);

			if ((digit_1 == 55) && (digit_2 == 56))
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
