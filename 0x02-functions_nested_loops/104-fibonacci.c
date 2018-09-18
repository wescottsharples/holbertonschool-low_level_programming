#include <stdio.h>

void fibonacci(void)
{
	int i;
	unsigned long int a = 1;
	unsigned long int b = 2;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < 96; i++)
	{
		if (a < b)
		{
			a = a + b;
			printf("%lu", a);
		}
		else if (a > b)
		{
			b = b + a;
			printf("%lu", b);
		}

		if (i != 95)
		{
			putchar(',');
			putchar(' ');
		}
	}
}

int main(void)
{
	fibonacci();
	putchar('\n');
	return(0);
}
