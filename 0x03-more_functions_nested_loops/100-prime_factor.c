#include <stdio.h>

/**
 * main - prints the largest prime factor of n
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;
	long factor, i = 2;

	while (n != 0)
	{
		if (n % i != 0)
			i++;
		else
		{
			factor = n;
			n /= i;

			if (n == 1)
			{
				printf("%li\n", factor);
				break;
			}
		}
	}

	return (0);
}
