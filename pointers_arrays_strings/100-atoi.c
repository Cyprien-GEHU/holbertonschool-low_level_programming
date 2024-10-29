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
	int i;
	int valeur = 0;
	int signe = 1;
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	s = s - len;

	for (i = 0; i < len; i++)
	{
		if (s[i] == 45)
			signe *= -1;

		if (s[i] >= 48 && s[i] <= 57)
			valeur = (valeur * 10) + (s[i] - '0');
		if (valeur > 0)
		{
			if (s[i] < 48 || s[i] > 57)
				break;
		}
	}
	valeur = valeur * signe;
	return (valeur);
}
