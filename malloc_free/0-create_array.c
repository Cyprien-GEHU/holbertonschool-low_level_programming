#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an arrayof chars
 * @size : the size
 * @c : the char
 *
 * Return: char or "NULL";
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *arr;

	arr = malloc(size * sizeof(char));
	
	if (arr == 0 || size = 0)
		return (NULL);

	for (x = 0; x <= size; x++)
		arr[x] = c;
	return (arr);
}
