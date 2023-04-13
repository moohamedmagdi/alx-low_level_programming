#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array
 * @min: min
 * @max: max
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int *z;
	int x, all;

	all = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	z = malloc(sizeof(int) * all);
	if (z == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++)
	{
		z[x] = min++;
	}
	return (z);
}
