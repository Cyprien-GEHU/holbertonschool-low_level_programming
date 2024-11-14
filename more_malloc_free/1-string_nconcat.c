#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1 : first string
 * @s2 : second string
 * @n : byte
 *
 * Return: new string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		len2 = n;

	arr = malloc(len1 + len2 + 1);
	if (arr == 0)
	{
		return (NULL);
	}

	for (x = 0; x < len1; x++)
	{
		arr[x] = s1[x];
	}

	for (x = 0; x < len2; x++)
	{
		arr[x + len1] = s2[x];
	}

	arr[len1 + x] = '\0';
	return (arr);
}
