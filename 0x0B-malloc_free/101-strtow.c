#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * my_free_grid - two dim array
 * @grid: grid of array
 * @height: height of the array
 *
 * Return: nothing
 */
void my_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - split strng
 * @str: string
 *
 * Return: pointer of array
 */
char **strtow(char *str)
{
	char **ao;
	unsigned int height, y, x, z, i;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (y = height = 0; str[y] != '\0'; y++)
		if (str[y] != ' ' && (str[y + 1] == ' ' || str[y + 1] == '\0'))
			height++;
	ao = malloc((height + 1) * sizeof(char *));
	if (ao == NULL || height == 0)
	{
		free(ao);
		return (NULL);
	}
	for (x = i = 0; x < height; x++)
	{
		for (y = i; str[y] != '\0'; y++)
		{
			if (str[y] == ' ')
				i++;
			if (str[y] != ' ' && (str[y + 1] == ' ' || str[y + 1] == '\0'))
			{
				ao[x] = malloc((y - i + 2) * sizeof(char));
				if (ao[x] == NULL)
				{
					my_free_grid(ao, x);
					return (NULL);
				}
				break;
			}
		}
		for (z = 0; i <= y; i++, z++)
			ao[x][z] = str[i];
		ao[i][z] = '\0';
	}
	ao[x] = NULL;
	return (ao);
}
