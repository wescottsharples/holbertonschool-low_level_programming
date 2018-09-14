#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int num2 = 1;

	for (num = 0 ; num <= 1000 ; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');

		putchar((32));

		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
	}

	putchar('\n');

	return (0);
}
