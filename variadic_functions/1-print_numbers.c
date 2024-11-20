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

	for (i = 0; i < n; i++)
	{
		print = va_arg(every, int);
		printf("%d", print);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

}
