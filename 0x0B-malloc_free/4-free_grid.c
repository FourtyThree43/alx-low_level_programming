#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Free memory for each row of the grid */
	for (i = 0; i < height; i++)
		free(grid[i]);
	/* Free memory for the pointer to the rows of the grid */
	free(grid);
}
