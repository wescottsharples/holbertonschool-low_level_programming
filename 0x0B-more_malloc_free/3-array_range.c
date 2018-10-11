#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the starting integer
 * @max: the ending integer
 * Return: Pointer to array, else NULL.
 */
int *array_range(int min, int max)
{
	int i, num, range;
	int *arr;

	/* Ensure min is less than max */
	if (min > max)
		return (NULL);

	/* Find the range including min and max */
	range = (max - min) + 1;

	/* Allocate memory for array of ints */
	arr = malloc(sizeof(int) * range);
	if (!arr)
		return (NULL);

	/* Loop through array and set the values from min to max */
	for (i = 0, num = min; num <= max; i++, num++)
		arr[i] = num;

	return (arr);
}
