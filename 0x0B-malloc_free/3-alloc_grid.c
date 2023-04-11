#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - entry
 *@width: rows of matrix
 *@height: columns of string
 *
 * Return: two dim array
 */
int **alloc_grid(int width, int height)
{
	int **mtrx;
	int x;
	int y;
	int z;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	mtrx = (int **)malloc(height * sizeof(int *));
	if (mtrx == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		*(mtrx + x) = (int *)malloc(width * sizeof(int));
		if (*(mtrx + x) == NULL)
		{
			for (x = 0; x < height; x++)
			{
				p = mtrx[x];
				free(p);
			}
			free(mtrx);
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (y = 0; y < width; y++)
		{
			mtrx[z][y] = 0;
		}
	}
	return (mtrx);
}
