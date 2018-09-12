#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("The size of a long long int: %l byte(s)\n", (long)sizeof(lli));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));


	return (0);
}
