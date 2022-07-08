#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - check code
 * @width: ancho de la matriz
 * @height: largo de la matriz
 * Return: grid - pointer
 */

void free_grid(int **grid, int height)
{
	grid = malloc(sizeof(int *) * height);
	free(grid);
}
