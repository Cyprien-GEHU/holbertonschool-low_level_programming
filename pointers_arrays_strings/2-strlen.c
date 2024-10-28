#include "main.h"

/**
 * _strlen - print the length of a string
 *
 * @s : the string
 *
 * Return: the length of a sting
 */

int _strlen(char *s)
{
	int len;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
