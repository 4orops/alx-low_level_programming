#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - 2 dimension clean up
 * @grid: grid
 * @height: height of a dimension
 * return: nothing
 * */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
