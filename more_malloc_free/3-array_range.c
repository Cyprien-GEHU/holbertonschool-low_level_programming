#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intergers
 * @min : min value
 * @max : max value
 *
 * Return: int or "NULL";
 */

int *array_range(int min, int max)
{
	int *ari;
	int x;

	if (min > max)
		return (NULL);

	ari = malloc((max - min + 1) * sizeof(int));

	if (ari == NULL)
	{
		free(ari);
		return (NULL);
	}

	for (x = min; x <= max; x++)
		ari[x] = x;
	return (ari);
}
