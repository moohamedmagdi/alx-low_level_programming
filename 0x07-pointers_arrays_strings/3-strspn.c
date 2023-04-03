#include "main.h"

/**
 * _strspn - Get len
 *
 * @s: string
 * @accept: prefix
 *
 * Return: no. byte
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = 0;
	int x;

	while (*s)
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				byt++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (byt);
		}
		s++;
	}
	return (byt);
}
