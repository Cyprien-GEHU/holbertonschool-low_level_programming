#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * print_to_98 - print all natural numbers to 98
 *
 * @n: The start number
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}

	if (n <= 0 || n > 0)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
