#include "main.h"

/**
 * _strcmp - concatenates two string with n
 *
 * @s1 : the first string
 * @s2 : the second string
 *
 * Return: "retour" send the result
 */

int _strcmp(char *s1, char *s2)
{
	int final = 0;
	int i;
	int first = 0;
	int second = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			first = first + s1[i];
			second = second + s2[i];
			final = first - second;
			return (final);
		}
	}
	return (0);
}
