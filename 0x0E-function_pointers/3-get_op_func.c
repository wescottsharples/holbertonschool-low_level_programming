#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - Finds the correct function based on the operator
 * @s: Pointer to the operator
 * Return: Pointer to the correct function, else NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (*s == ops[i].op[0] && !*(s + 1))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
