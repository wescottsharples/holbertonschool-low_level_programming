#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: size of the integer array
 * @height: size of the pointer array
 * Return: Pointer to the grid, else NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			j = i - 1;
			break;
		}
	}

	if (j > 0)
	{
		for (j = i - 1; j >= 0; j--)
			free(grid[j]);
		free(grid);
		return (NULL);
	}

	return (grid);
}
