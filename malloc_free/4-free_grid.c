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
	if (height > 0)
		free(grid);
}
