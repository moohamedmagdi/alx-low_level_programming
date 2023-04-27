#include "lists.h"

/**
 * print_list - func of one arg
 * @h: const pointer
 *
 * Return: node no
 */

size_t print_list(const list_t *h)
{
	unsigned int co = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		co++;
	}
	return (co);
}

