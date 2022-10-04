#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a two (2) dimensional grid.
 * @grid: Multidimensional array of integers.
 * @height: height of the grid.
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
