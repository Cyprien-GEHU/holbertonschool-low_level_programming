#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest : the first string
 * @src : the second string
 *
 * Return: "dest" with all string
 */

char *_strcat(char *dest, char *src)
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

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	dest = dest - len2;

	return (dest);
}
