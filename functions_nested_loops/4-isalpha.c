#include "main.h"

/**
 * _isalpha - Return 0 and Return 1
 * @c : 'c' is a ASCII decimal
 *
 * Return: 1 if is a lowercase, _islower return 0 if is a uppercase
 */

int _isalpha(int c)
{

	if (c >= 'a' && 'z' >= c)
	{
		return (1);
	}

	if (c >= 'A' && 'Z' >= c)
	{
		return (1);
	}

	return (0);
}