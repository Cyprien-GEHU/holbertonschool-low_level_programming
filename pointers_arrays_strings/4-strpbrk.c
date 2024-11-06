#include "main.h"

/**
 * _strpbrk - searches a string of a set of bytes
 *
 * @s : the string
 * @accept : set of byte
 *
 * Return: "s" string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return (0);
}
