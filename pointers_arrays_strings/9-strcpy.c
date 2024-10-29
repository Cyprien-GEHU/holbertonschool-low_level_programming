#include "main.h"

/**
 * _strcpy - print the half of the string
 *
 * @dest : the string copy
 * @src : the string source
 *
 * Return: "dest"
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (*src)
	{
		len++;
		src++;
	}

	src = src - len;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
