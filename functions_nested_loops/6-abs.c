#include "main.h"

/**
 * _abs - computes the absolute value
 *
 *@r: the value of interger
 *
 *Return: value absolute of the interger
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}

	return (r);
}
