#include "main.h"

/**
 * _memcpy - Cop. area
 *
 * @dest: pointer for memo
 * @src: buffer for copy char
 * @n: no byte
 *
 * Return: poit of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
