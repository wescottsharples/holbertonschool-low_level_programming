#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int i;
	int j;

	n = 1024;
	j = 0;

	for (i = i; i <= n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = (j + i);
			printf("%d\n", j);
		}
	}
}
