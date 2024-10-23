#include "main.h"

/**
 * print_last_digit - print the last digit of number integer
 * @n : "n" is the number of the integer
 *
 * Return: the last digit
 *
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');
	return (ld);
}
