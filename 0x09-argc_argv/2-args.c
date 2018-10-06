#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguments recieved
 * @argc: the number of arguments to main
 * @argv: an arrary of string arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
