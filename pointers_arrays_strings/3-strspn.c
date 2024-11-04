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
	int i = 0;
	int i2 = 0;
	int length = 0;

	while (accept[i])
	{
		i++;
		i2++;
	}
	i2 = i2;

	for (i = 0; i2 >= 0; i2--)
		if (s[i] == accept[i2])
		{
			while (s[i] == accept[i2])
			{
				length++;
				i++;
			}
		}

	return (length);

}
