#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts array using bubble sort
 * and prints array after each swap
 *
 * @array: array to be sorted
 * @size: the size of array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	char flag = 1;

	if (!array || !*array)
		return;

	while (flag)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}
	}
}
