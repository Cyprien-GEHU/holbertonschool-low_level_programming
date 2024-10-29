#include "main.h"

/**
 * puts_half - print the half of the string
 *
 * @str : the string we send
 */

void puts_half(char *str)
{

	int len = 0;
	int n = 0;

	while (*str)
	{
		len++;
		str++;
	}

	n = (len - 1) / 2;
	str = (str - len) + n;

	while (n < len)
	{
		str++;
		_putchar(*str);
		n++;
	}
	_putchar('\n');
}
