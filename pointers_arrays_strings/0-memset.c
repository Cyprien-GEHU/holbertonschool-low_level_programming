#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s : the memory of the area
 * @b : constant byte
 * @n : bytes
 *
 * Return: s with all string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > i; i++)
		s[i] = b;

	return (s);
}
