#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - check code
 * @height: largo de la matriz
 * @grid: pointer
 */

void free_grid(int **grid, int height)
{
	while (height)
		free (grid[--height]);
		free(grid);
}
