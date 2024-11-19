#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - print the sums of all its parameters
 * @n : number of parameters
 *
 * Return: 0 or the result of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int p;
	int y;
	int result = 0;
	va_list sum;

	va_start(sum, n);

	if (n == 0)
		return (0);

	for (p = 0; p < n; p++)
	{
		y = va_arg(sum, int);
		result += y;
	}
	va_end(sum);
	return (result);
}
