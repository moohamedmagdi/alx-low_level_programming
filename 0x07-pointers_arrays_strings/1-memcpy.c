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

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int x;

	for (x = 0; index < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
