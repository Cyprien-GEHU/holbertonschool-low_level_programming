#include "main.h"

/**
 * _pow_recursion - the value "x" raise to the power "y"
 * @x : the interger
 * @y : integer pow
 *
 * Return: the value "x"
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
