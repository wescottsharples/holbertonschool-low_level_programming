#include <stdio.h>

/**
 * print_alphabet - prints the lowercase alphabet.
 *
 * Return: Not zero.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
