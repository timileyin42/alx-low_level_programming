#include "main.h"

/**
* alloc_grid -Allocates a 2-dimensional array of integers.
* @width: The width (number of colums) of the grid.
* @height: The height (number of rows) of the grid.
*
* Return: A pointer to the allocation of 2d array, or NULL if otherwise
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	/* checks for invalid dimensions */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocating of memoery for the grid */
	grid = malloc(height * sizeof(int *));

	/* checks for memory allocation failure */
	if (grid == NULL)
		return (NULL);
	/* allocating memory for rows and initializing element */
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			/* if memory allocation fail free previous allocation, return NULL */
			for (y = 0; y < x; y++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}

		/* initializing elements of the row from 0 */
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
