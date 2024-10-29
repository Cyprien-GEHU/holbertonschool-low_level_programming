#include "main.h"

/**
 * _atoi - convert the string to integer
 *
 * @s : the string 
 *
 * Return: integer 
 */

int _atoi(char *s)
{
	int i = 0;
	int valeur;

	while(*s)
	{
		if (s[i] >= '0' && s[i] <= '9')
			valeur = s[i];	
		s++;
		i++;
	}

	return (valeur);
}
