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
	str = str - (n + 1);

	while (n < len)
	{
		_putchar(*str);
		str++;
		n++;
	}
	_putchar('\n');
}
