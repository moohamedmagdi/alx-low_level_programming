#include "main.h"

/**
 * _strspn - Get len
 *
 * @s: string
 * @accept: prefix
 *
 * Return: no. bt
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bt = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				bt++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (bt);
		}
		s++;
	}
	return (bt);
}
