#include "main.h"

/**
 * print_alphabet_x10 - _putchar()
 *
 * Return
 */

void print_alphabet_x10(void)
{
	int x = 0;

	while (x < 10)
	{

		int i = 97;

		while (i < 123)
		{
			_putchar(i);
			i++;
		}

		_putchar('\n');
		x++;
	}
}
