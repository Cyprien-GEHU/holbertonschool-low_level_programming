#include "main.h"

/**
 * _puts - print a string
 *
 * @str : the string we send
 */

void _puts(char *str)
{
	while(*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
