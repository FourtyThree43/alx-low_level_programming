#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: the width of the grid.
 * @height: the height of the grid.
 *
 * Return: a pointer to a 2 dimensional array of integers
 * NULL (error).
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows of the grid */
	grid = malloc(height * sizeof(int *));
	/* Check if malloc failed to allocate memory */
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for the columns of the grid */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		/* Check if malloc failed to allocate memory */
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	/* Initialize each element of the grid to 0 */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	/* Return the pointer to the grid */
	return (grid);
}
