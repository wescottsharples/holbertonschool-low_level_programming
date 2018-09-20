#include <stdio.h>

int main(void)
{
	long long n = 612852475143;
	long long factor, i = 2;

	while (n != 0)
	{
		if (n % i != 0)
			i++;
		else
		{
			factor = n;
			n /= i;

			if (n == 1)
			{
				printf("%lli\n", factor);
				break;
			}
		}
	}
}
