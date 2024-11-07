#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - add all postif number
 * @argc : the size of argv
 * @argv : the argument with program
 *
 * Return: 0;
 */


int main(int argc, char *argv[])
{
	int i = 0;
	int result = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) < 0)
			result += 0;
		else
			result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
