#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 *
 * @text : the array
 *
 * Return: "text" on uppercase
 */

char *string_toupper(char *text)
{
	int count = 0;

	while (text[count] != '\0')
	{
		if (text[count] >= 'a' && text[count] <= 'z')
			text[count] = text[count] - 32;
		count++;
	}
	return (text);
}
