#include "main.h"

/**
 * print_diagonal - draw a line
 *
 * @n : a integers
 */

void print_diagonal(int n)
{
	int i = 0;
	int e;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			for (e = 0; e <= i; e++)
				_putchar(' ');

			_putchar('\\');
			i++;
			_putchar('\n');
		}
	}
}
