#include <stdlib.h>
#include "lists.h"

/**
 * free_list - func of one arg
 * @head: poi to list_t
 *
 * Return: na
 */

void free_list(list_t *head)
{
	list_t *cursor;

	while (head)
	{
		cursor = head->next;
		free(head->str);
		free(head);
		head = cursor;
	}
}

