#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - entry
 *@str: string we need to duplicate
 *
 * Return: stn
 */
char *_strdup(char *str)
{
	char *stn = NULL;
	unsigned int x;
	int y;

	if (str == NULL)
		return (NULL);
	for (y = 0; str[y] != '\0'; y++)
		;
	stn = (char *)malloc(y + 1 * sizeof(char));
	if (stn != NULL)
	{
		for (x = 0; str[x] != '\0'; x++)
			stn[x] = str[x];
	} else
	{
		return (NULL);
	}
	stn[x] = '\0';
	return (stn);
}
