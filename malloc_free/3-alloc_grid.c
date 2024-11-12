#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create an arrayof chars
 * @width : first string
 * @height : second string
 *
 * Return: the 2 dimentional array or "NULL";
 */

int **alloc_grid(int width, int height)
{
	int x, n;
	int **ti;

	if (width <= 0 || height <= 0)
		return (NULL);

	ti = (int **)malloc(height * sizeof(int *));
	if (ti == NULL)
	{
		free(ti);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{

		ti[x] = (int *)malloc(width * sizeof(int));
		if (ti[x] == NULL)
		{
			while (x--)
				free(ti[x]);
			free(ti);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			ti[x][n] = 0;
	}
	return (ti);
}
