#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print all natural numbers to 100
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int mul3;
	int mul5;

	for (n = 1; n <= 100; n++)
	{
		mul3 = n % 3;
		mul5 = n % 5;

		if (mul3 == 0)
			printf("Fizz");
		if (mul5 == 0)
			printf("Buzz");
		if (mul3 != 0 && mul5 != 0)
			printf("%d", n);
		if (n != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
