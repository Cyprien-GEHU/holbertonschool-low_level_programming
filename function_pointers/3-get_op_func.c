#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_t ops - structure calculator
 *
 */


int (*get_op_func(char *s))(int , int )
{
	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
    	};
    	/*int i = 0;*/
	char *t;
	t = ops->op;
	printf("%s, %s", s, t);
	return (NULL);
}
