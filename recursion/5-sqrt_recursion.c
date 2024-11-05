#include "main.h"

/**
 * natural - find the natural number
 * @i : the integers
 * @n : the number
 *
 * Return: the natural nutural number
 */

int natural(int i, int n)
{
	if (i * i == n)
		return (i);
	if (n < i * i)
		return (-1);
	return (natural(i + 1, n));
}

/**
 * _sqrt_recursion - print the natural number
 *
 * @n: the number
 *
 * Return: "n"
 */
int _sqrt_recursion(int n)
{
	n = natural(1, n);
	return (n);
}
