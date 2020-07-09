#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - free allocated memory
* @grid: size
* @height: height
* Return: array
*/

void free_grid(int **grid, int height)
{
	int n = 0;

	while (n < height)
	{
		free(grid[n]);
		n++;
	}
	free(grid);
}
