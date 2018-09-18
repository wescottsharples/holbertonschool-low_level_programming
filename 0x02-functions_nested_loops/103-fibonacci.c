#include <stdio.h>

void fibonacci(void)
{
	int counter;
	unsigned long int total = 0;
	unsigned long int a = 5;
	unsigned long int b = 8;

	while (total < 4000000)
	{
		if (a < b)
		{
			a = a + b;
		}
		else if (a > b)
		{
			b = b + a;
		}

		for (counter = 0; counter < 3; counter++)
		{
			if ((a < b) && (counter == 2) && (total < 4000000))
			{
				total = total + b;
			}
			else if ((a > b) && (counter == 2) && (total < 4000000))
			{
				total = total + a;
			}
		}

		counter = 0;
	}

	printf("%lu", total);
}

int main(void)
{
	fibonacci();
	putchar('\n');
	return(0);
}
