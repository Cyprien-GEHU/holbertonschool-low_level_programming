#include "main.h"

/**
 * _puts_recursion - print the string char by char
 * @s : the string
 */


void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s == '\0')
		_putchar('\n');
	else
		_puts_recursion(s);
}

