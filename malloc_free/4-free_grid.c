#include "main.h"

/**
 * free_grid - frees a two dimensional array of integers previously
 * created by the alloc_grid function
 * @grid: pointer to the 2D array to be freed
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
