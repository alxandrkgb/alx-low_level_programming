#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of grid
 * @height: height of the grid
 *
 * Return: pointer to the newly allocated grid, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* free previously allocated memory */
			for (j = i - 1; j >= 0; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
