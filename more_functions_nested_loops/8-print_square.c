#include "main.h"

/**
 * print_square - print a square
 *
 * @size : the size of the square
 */

void print_square(int size)
{
	int h = 0;
	int l = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (h < size)
		{
			while (l < size)
			{
				_putchar('#');
				l++;
			}
			l = 0;
			_putchar('\n');
			h++;
		}
	}
}
