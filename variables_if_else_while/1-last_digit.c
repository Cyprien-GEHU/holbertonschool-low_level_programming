#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	if (ln != 0  && ln < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
	}
	if (ln == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ln);
	}
	if (ln > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ln);
	}

	return (0);
}
