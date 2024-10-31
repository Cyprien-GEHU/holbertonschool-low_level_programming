#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @text : the string
 *
 * Return: "text" new string
 */

char *cap_string(char *text)
{
	int i;
	int len = 0;

	while (*text)
	{
		text++;
		len++;
	}

	text = text - len;
	len = len - 1;

	for (i = 0; i < len; i++)
	{
		if (text[i] == '\t' || text[i] == ' ' || text[i] == '.' || text[i] == '\n' ||
		text[i] == ';' || text[i] == ',' || text[i] == '!' || text[i] == '?' ||
		text[i] == '{' || text[i] == '}' || text[i] == '(' || text[i] == ')' ||
		text[i] == '"')
		{
			if (text[i + 1] >= 'a' && text[i + 1] <= 'z')
				text[i + 1] = text[i + 1] - 32;
		}
	}
	return (text);
}
