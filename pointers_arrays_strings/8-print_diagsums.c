#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the the sum to two diagonals
 *
 * @a : the array
 * @size : size of the array
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int i2 = size - 1;
	int result1 = 0;
	int result2 = 0;

	while (i < size)
	{
		result1 += a[i];
		result2 += a[i2];
		i++;
		i2--;
		a += size;
	}
	printf("%d, %d\n", result1, result2);
}
