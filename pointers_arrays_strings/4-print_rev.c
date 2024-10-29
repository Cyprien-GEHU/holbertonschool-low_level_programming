#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s : the string we send
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	while (len != 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
