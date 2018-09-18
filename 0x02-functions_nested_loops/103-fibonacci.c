#include <stdio.h>

void fibonacci(void)
{
	int counter;
	unsigned long int total = 0;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c = 0;

	while (a < 4000000 && b < 4000000)
	{
		if (a < b)
		{
			c = a + b;
		}
		else if (a > b)
		{
			c = b + a;
		}

		for (counter = 0; counter < 3; counter++)
		{
			if ((a < b) && (counter == 2) && (b < 4000000))
			{
				total = total + a;
			}
			else if ((a > b) && (counter == 2) && (a < 4000000))
			{
				total = total + b;
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
