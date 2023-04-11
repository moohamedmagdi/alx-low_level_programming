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
	unsigned int c, h, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = h = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			h++;
	ao = malloc((h + 1) * sizeof(char *));
	if (ao == NULL || h == 0)
	{
		free(ao);
		return (NULL);
	}
	for (i = a1 = 0; i < h; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				ao[i] = malloc((c - a1 + 2) * sizeof(char));
				if (ao[i] == NULL)
				{
					my_free_grid(ao, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			ao[i][j] = str[a1];
		ao[i][j] = '\0';
	}
	ao[i] = NULL;
	return (ao);
}
