#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - the function main
 * @argc: number of argument
 * @argv: all parameters
 * return 0;
 */

int main (int argc, char *argv[])
{
	/*int num1 = 0;*/
	int num2 = 0;

	/*num1 = atoi(argv[1]);*/
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	get_op_func(argv[2]);
	return(0);
}
