#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha = 97;

	for (alpha = 97 ; alpha <= 122 ; alpha++)
	{
		putchar(alpha);
	}
	
	for (alpha = 65 ; alpha <= 90 ; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
