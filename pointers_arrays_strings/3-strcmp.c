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
	int retour;

	retour = s1[0] - s2[0];
	return (retour);
}
