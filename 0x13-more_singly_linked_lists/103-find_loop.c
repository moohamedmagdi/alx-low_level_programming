#include "lists.h"
#include <stdlib.h>

/**
  * find_listint_loop - find
  * @head: linked list
  *
  * Return: The address of the node where the loop starts, or NULL if there is no loop
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == head->next)
			return (end);
		for (ptr = head; ptr != end; ptr = prt->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}
