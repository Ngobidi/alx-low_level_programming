#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - print pointer that selects only the correct function
 * to perform operation requested by the user
 * @s: user (operator's) transfered arguments
 *
 * Return: pointer to the function that's correct with the
 * operator given as a parameter (data)
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
	int x;

	x = 0;

	while (ops[x].op)
	{
		if (strcmp(ops[x].op, s) == 0)
			return (ops[x].f);
		x++;
	}

	return (NULL);
}
