#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * Desc - 'a function that frees the memory space allocated
 * for previous program'
 * @grid : pointer to 2 dimensional array
 * @height : height of grid
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int q;

	for (q = 0; q < height; q++)
	{
		free(grid[q]);
	}
	free(grid);
}
