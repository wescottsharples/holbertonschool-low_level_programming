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

	printf("The size of a char: %i byte(s)\n", (int)sizeof(c));
	printf("The size of an int: %i byte(s)\n", (int)sizeof(i));
	printf("The size of a long int: %i byte(s)\n", (int)sizeof(li));
	printf("The size of a long long int: %i byte(s)\n", (int)sizeof(lli));
	printf("The size of a float: %i byte(s)\n", (int)sizeof(f));


	return (0);
}
