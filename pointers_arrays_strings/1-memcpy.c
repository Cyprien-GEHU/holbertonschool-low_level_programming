#include "main.h"

/**
 * _memcpy - copy the memory area
 *
 * @dest : the copy of memory area
 * @src : the memory area
 * @n : length in the memory area
 *
 * Return: "dest" the copy of memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
