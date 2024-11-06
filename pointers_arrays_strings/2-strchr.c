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
	int n = 0;

	check = c;

	if (s == NULL)
		return (NULL);

	while (s[n] != check && s[n] != '\0')
	{
		n++;
		if (s[n] == check)
			return (s + n);
	}

	return (NULL);
}
