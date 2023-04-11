#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry
 *@size: size of the array
 *@c: character
 *
 * Return: ar
 */

char *create_array(unsigned int size, char c)
{
	char *ar = NULL;
	unsigned int x;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		ar = (char *)malloc(size * sizeof(char));
		if (ar != NULL)
		{
			for (x = 0; x < size; x++)
				ar[x] = c;
		}
	}
	return (ar);
}
