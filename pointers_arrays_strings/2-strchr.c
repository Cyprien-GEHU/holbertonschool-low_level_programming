#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in string
 *
 * @s : the string
 * @c : the charactere
 *
 * Return: s with all string
 */

char *_strchr(char *s, char c)
{
	char check;

	check = c;

	if (s == NULL)
		return (NULL);

	while (*s)
	{
		if (*s == check)
			return (s);
		s++;
	}

	return (NULL);
}
