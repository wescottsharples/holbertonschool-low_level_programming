#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the program's name
 * @argc: the number of arguments to main
 * @argv: an arrary of string arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
