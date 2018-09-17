#include <stdio.h>

/**
 * print_alphabet_x10 - prints the lowercase alphabet.
 *
 * Return: Not zero.
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}

		putchar('\n');
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
