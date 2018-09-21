#include <stdio.h>

/**
 * main - prints 1-100 replacing multiples of 3 and 5
 * with the text Fizz and Buzz and FizzBuzz
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
			if (i < 100)
				printf(" ");
	}

	return (0);
}
