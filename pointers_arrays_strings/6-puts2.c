#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str : the string we send
 */

void puts2(char *str)
{

	int len = 0;
	int i;

	while (*str)
	{
		str++;
		len++;
	}

	str = str - len;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
