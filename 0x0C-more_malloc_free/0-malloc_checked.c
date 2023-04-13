#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - create array
 * @b: in
 *
 * Return: Out
 */

void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
