#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the function main
 * @argc: number of argument
 * @argv: all parameters
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int (*call)(int, int);
	int result;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = *(argv[2]);
	num2 = atoi(argv[3]);

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	call = get_op_func(&operator);
	if (call == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = call(num1, num2);
	printf("%d\n", result);
	return (0);
}
