#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - entry
 *@grid: rows of matrix
 *@height: columns of string
 *
 * Return: two dim array
 */
void free_grid(int **grid, int height)
{
	int x;
	int *p;

	for (x = 0; x < height; x++)
	{
		p = grid[x];
		free(p);
	}
	free(grid);
}
