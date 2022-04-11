#include "main.h"

/**
 * alloc_grid - two dimensional array
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to a grid, of null if zero or negative
 * value of widht and/or height
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int grid[][];

	if (width <= 0 || height <= 0)
	{
		return;
	}

	while (i < height)
	{
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}