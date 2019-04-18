#include "search_algos.h"

/**
 * print_array - Prints an array
 *
 * @array - the array to be printed
 * @low - lower bound of array
 * @high - upper bound of array
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - Searches for a value in array of ints using binary search
 *
 * @array: the array of ints to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 *
 * Return: The index of value in array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t mid = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
