#include "main.h"

/**
* free_grid - free a 2-dimensional grid.
* @grid: The grid to be freed.
* @height: The height (number of rows) of the grid.
*/

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
		return;

	/* freeing memory of row and arrays of pointers(row) */
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
