#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - multiplies two integer arguments
 * @argc: the number of arguments to main
 * @argv: an arrary of string arguments
 * Return: 0 if successful, 1 if erroneous.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
