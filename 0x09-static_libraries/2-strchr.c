#include "main.h"

/**
 * _strchr - Locate of char
 *
 * @s: string
 * @c: char
 *
 * Return: c found
 *         c null
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		return (s + x);
	}
	return ('\0');
}
