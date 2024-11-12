#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a dimensional
 * @grid : first string
 * @height : size of grid
 *
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
