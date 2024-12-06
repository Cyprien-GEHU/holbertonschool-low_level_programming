#include "main.h"

/**
 * binary_to_uint - convert bit to decimal
 * @b : chain of character
 *
 * Return: 0 or result
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] == '0' || b[x] == '1')
		{
			result = result * 2 + (b[x] - '0');
			x++;
		}
		else
			return (0);
	}
	return (result);
}
