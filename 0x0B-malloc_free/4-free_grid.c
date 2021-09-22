#include "main.h"
/**
*free_grid - frees a 2 dimeensional grid
*@grid: to be freed
*@height: of the grid
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
