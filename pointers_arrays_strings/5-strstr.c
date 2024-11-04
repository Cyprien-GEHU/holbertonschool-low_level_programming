#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack : the string
 * @needle : the first substring
 *
 * Return: the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int l1 = 0;
	int l2 = 0;

	while (needle[i])
	{
		i++;
		l1++;
	}

	l1 = l1 - 1;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] == needle[i])
				l2++;
			if (l1 == l2)
				return (haystack);
		}
		l2 = 0;
		haystack++;
	}
	return (haystack);
}
