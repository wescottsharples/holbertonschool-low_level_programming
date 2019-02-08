#include <stdlib.h>
#include "sort.h"

/**
 * swap - function swaps two integers
 *
 * @a: pointer to the first integer to be swapped
 * @b: pointer to the second integer to be swapped
 *
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * pivot - recursively generates new pivot points
 *
 * @array: array to sort
 * @low: beginning of array
 * @high: end of the array
 * @size: size of array
 *
 * Return: Nothing.
 */
void pivot(int *array, int low, int high, int size)
{
	int fulcrum;

	if (low < high)
	{
		fulcrum = partition(array, low, high, size);
		pivot(array, low, fulcrum - 1, size);
		pivot(array, fulcrum + 1, high, size);
	}
}

/**
 * partition - partitions the array
 * prints the array after every swap
 *
 * @array: array to sort
 * @low: beginning of array
 * @high: end of the array
 * @size: size of array
 *
 * Return: Nothing.
 */
int partition(int *array, int low, int high, int size)
{
	int i, j;
	int fulcrum;

	i = low - 1;
	fulcrum = array[high];
	for (j = low; j < high; j++)
	{
		if (array[j] < fulcrum)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (fulcrum < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort - sorts an array using quick sort
 *
 * @array: the array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || !array)
		return;

	pivot(array, 0, size - 1, size);
}
