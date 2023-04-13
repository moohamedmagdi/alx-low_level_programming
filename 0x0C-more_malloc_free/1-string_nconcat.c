#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenate
* @s1: in1
* @s2: in2
* @n: len s2
*
* Return: non
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	x = 0;
	while (s1[x])
		x++;

	a = malloc(sizeof(*a) * x + n + 1);

	if (a == NULL)
		return (NULL);

	for (y = 0, z = 0; y < (x + n); y++)
	{
		if (y < x)
		{
			a[y] = s1[y];
		}
		else
		{
			a[y] = s2[z++];
		}
	}
	a[y] = '\0';
	return (a);
}
