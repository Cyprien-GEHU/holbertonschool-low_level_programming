#include "main.h"


/**
 * leet - encode the string into 1337 (leet)
 *
 * @l : the string
 *
 * Return: "text" new string
 */

char *leet(char *l)
{
	int i = 0;
	int n;
	char leet[] = {'O', '0', 'o', '0', 'L', '1', 'l', '1',
		'E', '3', 'e', '3', 'A', '4', 'a', '4', 'T', '7', 't', '7'};

	while (l[i] != '\0')
	{
		for (n = 0; leet[n] != '\0'; n++)
		{
			if (l[i] == leet[n])
			{
				l[i] = leet[n + 1];
				n += 4;
			}
		}
		i++;
	}
	return (l);
}
