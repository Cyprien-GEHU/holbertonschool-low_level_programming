#include "main.h"

/**
 * swap_int - swap the value of "a" and "b"
 *
 * @a : the first integers
 * @b : the second integers
 */

void swap_int(int *a, int *b)
{
	int na, nb;

	na = *a;
	nb = *b;

	*a = nb;
	*b = na;
}
