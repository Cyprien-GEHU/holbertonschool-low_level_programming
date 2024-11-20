#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print all string
 * @separator : sparator beewteen numbers
 * @n : number of parameters
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *s;
	va_list string;

	va_start(string, n);

	for (x = 0; x < n; x++)
	{
		s = va_arg(string, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (x != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
