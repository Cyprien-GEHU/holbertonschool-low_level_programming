#include "main.h"

/**
 * _strncpy - concatenates two string with n
 *
 * @dest : the first string
 * @src : the second string
 * @n : bytes from src
 *
 * Return: "dest" with all string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (*src)
	{
		src++;
		len++;
	}

	src = src - len;

	for (i = 0 ; i < n; i++)
	{
		dest[i] = src[i];
		if (i > len)
			dest[i] = 0;
	}
	return (dest);
}
