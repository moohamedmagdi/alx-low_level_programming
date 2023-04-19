#include "function_pointers.h"

/**
 * array_iterator - execute function
 * @array: array
 * @size: size
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
