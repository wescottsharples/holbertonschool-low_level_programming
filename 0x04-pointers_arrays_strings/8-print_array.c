#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements in array a.
 * @a: an array of integers
 * @n: the amount of elements you want to print
 * Return: None.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
			printf(", ");
	}

	printf("\n");
}
