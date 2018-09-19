#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints the fibonacci sequence for 98 terms
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	/*Declaring variables*/
	unsigned long total1, total2, a1 = 1, b1 = 2, a2 = 0, b2 = 0;
	int i, overflow;
	/*Printing the first two numbers*/
	printf("%li, %li, ", a1, b1);
	/*Breaking the numbers into parts*/
	for (i = 0; i < 96; i++)
	{
		total1 = a1 + b1;
		if ((total1 / 100000000000000) > 0)
		{
			overflow = total1 / 100000000000000;
			total1 = total1 % 100000000000000;
		}
		/*Printing the numbers by combining constituents*/
		total2 = a2 + b2 + overflow;
		if (total2 > 0)
			printf("%li%li", total2, total1);
		else
			printf("%li", total1);
		/*Setting my variables for next iteration*/
		overflow = 0;
		a1 = b1;
		a2 = b2;
		b1 = total1;
		b2 = total2;
		/*Print comma and spaces*/
		if (i < 95)
		{
			printf(", ");
		}
	}

	putchar('\n');
	return (0);
}
