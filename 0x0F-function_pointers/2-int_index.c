#include "function_pointers.h"

/**
 * int_index - search func
 * @array: array
 * @size: size
 * @cmp: function pointer
 *
 * Return: index match cmp, or -1 if non
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}

	return (-1);
}
