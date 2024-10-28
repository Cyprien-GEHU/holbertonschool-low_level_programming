#include "main.h"

/**
 * _isdigit - Return 0 and Return 1
 * @c : 'c' is a ASCII decimal
 *
 * Return: 1 if is a digit, return 0 if isn't a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && '9' >= c)
		return (1);
	else
		return (0);

	return (0);
}
