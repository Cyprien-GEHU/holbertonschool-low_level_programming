#include "main.h"

/**
 * _strncat - concatenates two string with n
 *
 * @dest : the first string
 * @src : the second string
 * @n : bytes from src
 *
 * Return: "dest" with all string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;
	int i;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
	{
		len2++;
		dest++;
	}

	src = src - len;

	for (i = 0 ; i < n; i++)
	{
		dest[i] = src[i];
		if (i == len)
			break;
	}
	dest[i] = '\0';
	dest = dest - len2;

	return (dest);
}
