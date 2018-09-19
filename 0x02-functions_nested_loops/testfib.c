#include <stdio.h>

/**
 * fibonacci - sum the total of even numbers in the fibonacci sequence.
 *
 * Return: None.
 */
void fibonacci(void)
{
	int i;
	unsigned long int c;
	unsigned long int total = 0;
	unsigned long int a = 0;
	unsigned long int b = 1;

	while ((a < 4000000) || (b < 4000000))
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0)
			total = total + c;
	}

	printf("%lu", total);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci();
	putchar('\n');
	return (0);
}
