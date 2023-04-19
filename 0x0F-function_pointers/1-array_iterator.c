#include "function_pointers.h"

/**
 * array_iterator - execute function
 * @array: array
 * @size: size
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
