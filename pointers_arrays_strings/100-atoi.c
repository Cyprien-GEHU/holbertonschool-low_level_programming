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
	int signe = 1;

	while(*s)
	{
		if (s[i] == '-')
			signe *= -1;

		if (s[i] >= '0' && s[i] <= '9')
			valeur = s[i];	
		s++;
		i++;
	}
	valeur = valeur * signe;

	return (valeur);
}
