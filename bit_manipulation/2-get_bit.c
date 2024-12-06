#include "main.h"

/**
 * get_bit - return the value of a bit at given index
 * @n : value
 * @index :the index
 *
 * Return: 0 or 1 or -1 if we have an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int t;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	t = 1 << index;
	return ((n & t) != 0);
}
