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
	unsigned int i = 0;
	unsigned int x = 0;

	while (haystack[x] != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[x + i] != needle[i])
				break;
		}
		if (needle[i] == '\0')
			return (haystack + x);
		haystack++;
	}
	return ('\0');
}
