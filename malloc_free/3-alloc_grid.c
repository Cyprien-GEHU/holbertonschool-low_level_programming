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

	if (width == 0 || height == 0)
		return (NULL);

	ti = (int **)malloc(height * sizeof(int *));
	for (x = 0; x < width; x++)
	{
		if (ti == NULL)
			return (NULL);

		ti[x] = (int *)malloc(width * sizeof(int));
		if (ti[x] == NULL)
		{
			while (x--)
				free(ti[x]);
			free(ti);
			return (NULL);
		}
		for (n = 0; n < height; n++)
			ti[x][n] = 0;
	}
	return (ti);
}
