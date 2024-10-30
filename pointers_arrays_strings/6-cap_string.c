#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s : the string
 *
 * Return: "s" new string
 */

char *cap_string(char *text)
{
	int i;
	int len = 0;

	while(*text)
	{
		text++;
		len++;
	}

	text = text - len;
	len = len - 1;

	for (i = 0;i < len; i++)
	{
		if (text[i] < 'a' && text[i] > 'z')
		{
			if (text[i+1] >= 'a' && text[i+1] <= 'z') 
				text[i+1] = text[i+1] - 32;
		}

	}	
	return (text);
}
