#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the gird
 * @grid: is a grid
 * @height: grid height
 * Return: nothing to return
*/
void free_grid(int **grid, int height)
{
	int r;
	
	for (r = 0; r < height; r++)
	{
	free(grid[r]);
	}
	free(grid);
}
