#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size : size of the triangle
 */

void print_triangle(int size)
{
	int index = 1;
	int number, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (index <= size)
		{
			for (space = index + 1; space <= size; space++)
				_putchar(' ');
			for (number = 0 ; number < index; number++)
				_putchar('#');
			_putchar('\n');
			index++;
		}
	}
}
