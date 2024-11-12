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

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));

	for(x = 0; x <= size; x++)
	{
		arr[x] = c;
		if (x == size)
			return(arr);
	}	
	return (NULL);
}
