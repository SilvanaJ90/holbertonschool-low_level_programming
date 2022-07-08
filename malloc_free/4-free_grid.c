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
	for (height = 0; height; height--)
		free(grid);
}
