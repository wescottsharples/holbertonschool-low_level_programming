#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 * prints array after each swap
 *
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

	if (!size || size == 1)
		return;

	for (i = 0; i < size; i++)
	{
		j = i + 1;
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
