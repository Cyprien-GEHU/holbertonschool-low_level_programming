#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - structure calculator
 * @s : operator
 *
 * Return: call fonction operator
 */


int (*get_op_func(char *s))(int, int)
{
	op_t oper[] = {
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
		if (*(oper[i].op) == *s)
		{
			return (oper[i].f);
		}
		i++;
	}
	return (NULL);
}
