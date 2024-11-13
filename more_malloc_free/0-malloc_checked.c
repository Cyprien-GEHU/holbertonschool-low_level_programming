#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b : length of the srting
 *
 * Return: loc or exit(98)
 */

void *malloc_checked(unsigned int b)
{

	void *loc = malloc(b);

	if (b > 0)
	{
		if (loc == 0)
			exit(98);
		return (loc);
	}
	exit(98);
}
