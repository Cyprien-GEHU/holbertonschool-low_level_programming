#include "main.h"

/**
 * _islower - Return 0 and Return 1
 * @c : 'c' is a ASCII decimal
 *
 * Return: 1 if is a lowercase, _islower return 0 if is a uppercase
 */

int _islower(int c)
{

	if (c >= 65 && 90 >= c)
	{
		return (0);
	}
	return (1);
}

