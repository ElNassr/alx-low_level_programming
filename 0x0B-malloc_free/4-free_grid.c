#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free 2 dimesion array
 * @grid: pointer to pointer
 * @height: height of pointer to free
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
