#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int result, num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (num2 == 0 && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	if (!get_op_func(op))
	{
		printf("Error\n");
		return (99);
	}

	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);
	return (result);
}
