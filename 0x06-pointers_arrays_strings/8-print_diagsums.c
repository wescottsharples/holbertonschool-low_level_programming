#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: a square matrix containing integers
 * @size: the length of matrix 'a'
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	size -= 1;

	for (i = 0; i <= size; i++)
	{
		sum1 += a[((size + 1) * i)];
	}

	for (i = 0; i <= size; i++)
	{
		sum2 += a[((size - 1) * (i + 1))];
	}

	printf("%d, %d\n", sum1, sum2);
}
