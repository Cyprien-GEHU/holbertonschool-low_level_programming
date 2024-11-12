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
	int length = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		length++;

	arr = malloc(sizeof(char) * length + 1);

	if (arr == 0)
		return (NULL);

	for (n = 0; n <= length; n++)
	{
		arr[n] = str[n];
	}
	return (arr);
}
