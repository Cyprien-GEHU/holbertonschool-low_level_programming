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
	int len = 0;
	int i;

	while (*src)
	{
		len++;
		src++;
	}

	src = src - len;

	for (i = 0 ; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
