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
		len++;
		s++;
	}


	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
