#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s : the string we send
 */

void rev_string(char *s)
{
	char chain;
	int len = 0;
	int i = 0;

	while (*s)
	{
		s++;
		len++;
	}

	s = s - len;
	for (; i < len; i++)
	{
		len--;
		chain = s[i];
		s[i] = s[len];
		s[len] = chain;
	}

}
