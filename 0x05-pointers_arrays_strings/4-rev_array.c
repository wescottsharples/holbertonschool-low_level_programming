#include "holberton.h"

/**
 * reverse_array - reverses an array of integers.
 * @a: the array to be reversed
 * @n: the number of elements in the array
 * Return: None.
 */
void reverse_array(int *a, int n)
{
	int i, start, end;

	i = 0;
	n -= 1;

	while (i < n)
	{
		start = a[i];
		end = a[n];

		a[n] = start;
		a[i] = end;

		i++;
		n--;
	}
}
