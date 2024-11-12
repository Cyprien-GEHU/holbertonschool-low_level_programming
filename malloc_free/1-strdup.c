#include "main.h"
#include <stdlib.h>

/**
 * _strdup - retunr a pointer to a newly allocated space
 * @str : the string
 *
 * Return: char or "NULL";
 */

char *_strdup(char *str)
{
	int n;
	int length;
	char *arr;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		length++;

	arr = malloc(length * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);
	for (n = 0; n <= length; n++)
	{
		arr[n] = str[n];
	}
	return (arr);
}
