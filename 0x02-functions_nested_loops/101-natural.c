#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int total;

	for (i = 0; i <= 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			total = total + i;
		}
	}

	printf("%d\n", total);
	return (0);
}
