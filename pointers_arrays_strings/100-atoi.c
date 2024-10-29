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
	int valeur = 0;
	int signe = 1;
	int e = 0;
	int n = 0;

	while(*s != '\0')
	{
		if (s[i] == '-')
			signe *= -1;

		if (s[i] >= 48 && s[i] <= 57)
		{
			while(e != 1)
			{
				if(s[n] >= 48 && s[n] <= 57)
				{
					valeur = (valeur * 10) + (s[n] - '0');
					n++;
				}
				else
					e = 1;
			}
		}
		s++;
		i++;
	}
	valeur = valeur * signe;
	return (valeur);
}
