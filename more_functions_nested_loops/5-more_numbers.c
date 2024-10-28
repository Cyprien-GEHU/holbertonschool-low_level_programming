#include "main.h"

/**
 * more_numbers - print 0 to 9
 *
 */

void more_numbers(void)
{
	int i = 0;
	int n, fd, ld;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			fd = n / 10;
			ld = n % 10;
			if (n >= 10)
				_putchar(fd + '0');

			_putchar(ld + '0');
		}
	i++;
	_putchar('\n');
	}
}
