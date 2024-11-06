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
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
