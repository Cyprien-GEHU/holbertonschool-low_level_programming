#include "main.h"

/**
 * _strspn - the length of a prefix substring
 *
 * @s : the string
 * @accept : the prefix
 *
 * Return: "s"  the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	unsigned int x;

	while (s[n] != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[n] == accept[x])
			{
				break;
			}
		}
		if (s[n] != accept[x])
			break;
		n++;
	}
	return (n);
}
