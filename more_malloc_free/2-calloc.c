#include "main.h"
#include <stdlib.h>

/**
 * _calloc - create an array of chars
 * @nmemb : number of element
 * @size : the size on bytes
 *
 * Return: char or "NULL";
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
		if (arr == NULL)
		{
			free(arr);
			return (NULL);
		}

	for (x = 0; x < size * nmemb; x++)
	{
		arr[x] = 0;
	}
	return (arr);
}
