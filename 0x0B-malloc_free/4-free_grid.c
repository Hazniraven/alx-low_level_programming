#include "main.h"

/**
 *free_grid - write a function that frees a two dimensional grid
 *previously created by my alloc_grid
 *@grid: pointer to the grid
 *@height: height of grid
 *Return: none
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
