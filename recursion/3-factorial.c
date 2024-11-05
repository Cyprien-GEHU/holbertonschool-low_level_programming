#include "main.h"

/**
 * factorial - print the factorial of int
 * @n : the integer
 *
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
