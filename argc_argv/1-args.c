#include <stdio.h>
#include "main.h"

/**
 * main - print the length
 * @argc : the size of argv
 * @argv : the argument with program
 *
 * Return: 0;
 */


int main(int argc, char *argv[])
{

	if (argc == 1)
		printf("%d\n", argc - 1);
	if (argc >= 2)
		printf("%d\n", argc - 1);
	argv[0] = argv[0];
	return (0);
}
