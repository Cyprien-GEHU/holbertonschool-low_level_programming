#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc : the size of argv
 * @argv : the argument with program
 *
 * Return: 1 if we don't have 2 argurment
 */


int main(int argc, char *argv[])
{
	int result, f, l;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	f = atoi(argv[1]);
	l = atoi(argv[2]);
	result = f * l;
	printf("%d\n", result);
	return (0);
}
