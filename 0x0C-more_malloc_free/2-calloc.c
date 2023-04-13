#include "main.h"
#include <stdlib.h>

/**
* _calloc - calloc
* @nmemb: in
* @size: size
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;
	unsigned int x, y;

	y = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	z = malloc(y);
	if (z == NULL)
		return (NULL);

	for (x = 0; x < (y); x++)
	{
		z[x] = 0;
	}
	return (z);
}
