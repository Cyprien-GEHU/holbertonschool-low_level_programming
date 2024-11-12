#include "main.h"
#include <stdlib.h>

/**
 * str_concat - create an arrayof chars
 * @s1 : first string
 * @s2 : second string
 *
 * Return: char or "NULL";
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	arr = malloc((len1 + len2) * sizeof(char) + 1);
	if (arr == NULL)
	       return(NULL);	
	for (x = 0; x < len1; x++)
		arr[x] = s1[x];
	for (x = 0; x < len2; x++)
		arr[len1 + x] = s2[x];

	arr[len1 + len2 + 1] = '\0';
	return (arr);
}
