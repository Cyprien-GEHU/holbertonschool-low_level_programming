#include "main.h"

/**
 * print_chessboard - print a chessboard
 *
 * @a : the array of the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int i2 = 0;

	while (i < 8)
	{
		for (i2 = 0; i2 < 8; i2++)
			_putchar(a[i][i2]);
		_putchar('\n');
		i++;
	}
}
