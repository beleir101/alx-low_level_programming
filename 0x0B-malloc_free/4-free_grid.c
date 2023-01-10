#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - main func
 * @grid: size
 * @height: height
 * Description: described
 *
 * Return: notji
 */


void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
