#include "main.h"
#include <stdlib.h>

/**
 * free_grid - 2 array of int
 * @grid: 2 array
 * @height: heiht
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
