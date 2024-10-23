#include "main.h"

/**
 * print_sign - Return 0, 0 or +, 1 or -, -1
 * @n : 'n' is a ASCII decimal
 *
 * Return: 1 if the sign are positive
 * 0 if the sign are null
 * -1 if the sign are negatif
 */

int print_sign(int n)
{

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
