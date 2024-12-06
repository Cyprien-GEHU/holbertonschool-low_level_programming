#include "main.h"

/**
 * binary_to_uint - convert bit to decimal
 * @b : chain of character
 *
 * Return: 0 or result
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
