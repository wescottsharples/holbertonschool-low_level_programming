#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - adds positive numbers and prints the result
 * @argc: the number of arguments to main
 * @argv: an arrary of string arguments
 * Return: 0 if successful, 1 if erroneous.
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
