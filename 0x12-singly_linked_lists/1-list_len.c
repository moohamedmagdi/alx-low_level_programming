#include "lists.h"

/**
 * list_len - func of one arg
 * @h: const pointer to struct
 *
 * Return: element no
 */
size_t list_len(const list_t *h)
{
	unsigned int co = 0;

	while (h != NULL)
	{
		h = h->next;
		co++;
	}
	return (co);
}

