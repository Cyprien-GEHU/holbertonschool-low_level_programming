#include "main.h"

/**
 * _strlen - print the length of a string
 *
 * @s : the string
 *
 * Return: the length of a sting
 */

int _strlen(char *s)
{
	int len;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
