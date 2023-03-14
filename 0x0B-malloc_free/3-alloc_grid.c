#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @height: height of the grid
 * @width: width of the grid
 *
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int col;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width)
			if (grid[row] == NULL)
			{
				for (row--; row >= 0; row--)
				{
					free(grid[row]);
				}
				free(grid);
				return (NULL);
			}
		for (row = 0; row < height; row++)
			for (col = 0; col < width; col++)
			{
				grid[row][col] = 0;
			}
	}
	return (grid);
}
