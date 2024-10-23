#include "main.h"

/**
 * times_table - print the 9 times table
 *
 */

void times_table(void)
{
	int v, m, c, fd, ld;

	for (v = 0; v <= 9; v++)
	{
		for (m = 0; m <= 9; m++)
		{
			c = v * m;
			if (c > 9)
			{
				fd = c / 10;
				ld = c % 10;
				_putchar (fd + '0');
				_putchar (ld + '0');
			}
			else
			{
				if (m != 0)
				{
					_putchar(' ');
				}
				_putchar(c + '0');
			}

			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
