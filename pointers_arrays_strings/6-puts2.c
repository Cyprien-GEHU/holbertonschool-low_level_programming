#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str : the string we send
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
