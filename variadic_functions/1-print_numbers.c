#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all number
 * @separator : sparator beewteen numbers
 * @n : number of parameters
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int print;
	va_list every;

	va_start(every, n);

	if (separator == NULL || n == 0)
		;
	else
	{
		for (i = 0; i < n; i++)
		{
			print = va_arg(every, int);
			if (i == n - 1)
				printf("%d", print);
			else
				printf("%d, ", print);
		}
		printf("\n");
	}
}
