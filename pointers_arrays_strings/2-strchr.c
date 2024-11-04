#include "main.h"

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

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (s);
}
