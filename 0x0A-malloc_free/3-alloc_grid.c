#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - allocates memory for a 2D array and initializes it to zero
 * @width: the width of array
 * @height: the height of array
 * Return: Pointer to grid, else NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
