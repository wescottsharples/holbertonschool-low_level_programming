#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = '0' ; alpha <= 'f' ; alpha++)
	{
		if ((alpha <= 9))
		{	
			putchar(alpha);
		}
		else if (alpha == 10)
		{
			alpha = 'a';
		}
		else
		{
			continue;
		}
	}

	putchar('\n');

	return (0);
}
