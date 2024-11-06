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
	unsigned int i = 0;
	unsigned int i2 = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		for (i2 = 0; accept[i2]; i2++)
		{
			if (s[i] == accept[i2])
			{
				i++;
				length++;
			}
		}
		i++;
	}
	return (length);
}
