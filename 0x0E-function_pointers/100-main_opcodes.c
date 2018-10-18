#include <stdio.h>
#include <stdlib.h>

int foo(void);

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed at command line
 * @argv: an array of argument strings passed at command line
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, number_of_bytes;
	unsigned char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode = (unsigned char *)(long int)main;

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", *(opcode + i));

		if (i < (number_of_bytes - 1))
			putchar(' ');
		else
			putchar('\n');
	}

	return (0);
}
