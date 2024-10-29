#include "main.h"

/**
 * puts_half - print the half of the string
 *
 * @str : the string we send
 */

void puts_half(char *str)
{

	int len = 0;
	int n;

	while (*str)
	{
		len++;
		str++;
	}

	n = (len - 1) / 2;
	str = str - len;

	while (n < (len - 1))
	{
		n++;
		_putchar(str[n]);
	}
	_putchar('\n');
}
