#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printchar - print char
 * @va : the list
 *
 */

void _printchar(va_list va)
{
	printf("%c", va_arg(va, int));
}

/**
 * _printchar - print char
 * @va : the list
 *
 */

void _printint(va_list va)
{
	printf("%d", va_arg(va, int));

}

/**
 * _printchar - print char
 * @va : the list
 *
 */

void _printfloat(va_list va)
{
	printf("%f", va_arg(va, double));
}

/**
 * _printchar - print char
 * @format : the list
 *
 */

void _printstr(va_list va)
{
	printf("%s", va_arg(va, char *));
}

/**
 * print_all - print all
 * @format : the list
 *
 */

void print_all(const char * const format, ...)
{
	arr check[] = {
		{"c", _printchar},
		{"i", _printint},
		{"f", _printfloat},
		{"s", _printstr}
	};

	va_list printall;
	int i = 0;
	int n = 0;
	char *sepa;

	va_start(printall, format);
	sepa = "";
	while (format[i] != '\0')
	{
		while (n < 4)
		{
			if (format[i] == check[n].letter[0])
			{
				printf("%s", sepa);
				check[n].func(printall);
				sepa = ", ";
			}
			n++;
		}
		n = 0;
		i++;
	}

	printf("\n");
	va_end(printall);
}
