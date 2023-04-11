#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - entry
 *@s1: string 1
 *@s2: string 2
 *
 * Return: stn
 */
char *str_concat(char *s1, char *s2)
{
	char *stn = NULL;
	unsigned int x;
	int y;
	int z;
	int sum;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (y = 0; s1[y] != '\0'; y++)
		;
	for (z = 0; s2[z] != '\0'; z++)
		;
	stn = (char *)malloc((y + z + 1) * sizeof(char));
	if (stn == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		stn[x] = s1[x];
	for (; s2[sum] != '\0'; x++)
	{
		stn[x] = s2[sum];
		sum++;
	}
	return (stn);
}
