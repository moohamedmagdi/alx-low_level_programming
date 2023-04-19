#include "function_pointers.h"

/**
 * print_name - Print name
 * @name: char strng
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
