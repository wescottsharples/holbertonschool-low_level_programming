#include "search_algos.h"

/**
 * linear_search - Searches for a vlaue using the Linear Search algo
 *
 * @array: ptr to first element  of the arr to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: The first index of value on success, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
