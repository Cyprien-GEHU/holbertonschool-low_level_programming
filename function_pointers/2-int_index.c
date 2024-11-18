#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - print a name
 * @array : the array of integer
 * @size : the size of array
 * @cmp : the function call
 *
 * Return: "n"
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == 0 || cmp == 0)
		return (-1);

	if (size <= 0)
		return (-1);

	for (n = 0; n < size; n++)
	{
		cmp(array[n]);
		if (cmp(array[n]))
			return (n);
	}

	return (-1);
}
