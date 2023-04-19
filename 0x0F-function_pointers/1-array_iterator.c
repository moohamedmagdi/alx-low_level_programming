#include "function_pointers.h"

/**
 * array_iterator - execute function
 * @array: array
 * @size: size
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for (x = 0; x < size; x++)
		action(array[x]);
}
