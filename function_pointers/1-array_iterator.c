#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - print a name
 * @array : the array we send
 * @size : the size of array
 * @action : the function call
 *
 * Return: char or "NULL";
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
