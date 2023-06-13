#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2 dimensional grid previously created
 * @grid: 2d grid
 * @height: dimension of grid height
 * Description: frees the memory of grid that is created
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
