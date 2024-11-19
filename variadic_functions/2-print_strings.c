#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_string - print all string
 * @separator : sparator beewteen numbers
 * @n : number of parameters
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list string;

	va_start(string, n);

	if (separator == NULL || n == 0)
		;
	else
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(string, char);
			if (i == n - 1)
			{
				if (s != 0)
					printf("%d", s);
				else
					printf("(nil)");
			}
			else
			{
				if (s != 0)
					printf("%d, ", s);
				else
					printf("(nil), ");
			}
		}
		printf("\n");
	}
}
