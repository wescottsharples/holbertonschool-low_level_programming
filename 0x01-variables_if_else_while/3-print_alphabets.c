#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= '{')
		if ((alpha != ('{')) || (alpha != ('{')))
		{
			putchar(alpha);
			alpha++;
		}
		else if (alpha = '\[')
		{
			alpha = 'A';
		}
		else
		{
			continue
		}

	putchar('\n');

	return (0);
}
