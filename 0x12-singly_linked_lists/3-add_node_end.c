#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - func of two arg
 * @head: poi to struct
 * @str: str poi
 *
 * Return: addr
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int co = 0;
	list_t *end_node, *cursor;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	if (str)
	{
		end_node->str = _strdup(str);
		while (str[co] != '\0')
			co++;
		end_node->len = co;
	}
	else
	{
		end_node->str = NULL;
		end_node->len = 0;
	}
	end_node->next = NULL;
	if (*head)
	{
	cursor = *head;
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = end_node;
	}
	else
		*head = end_node;
	return (end_node);
}

/**
 * *_strdup - func of one arg
 * @str: str arg
 *
 * Return: poi
 */

char *_strdup(const char *str)
{
	int x, z;
	char *ptr;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (*(str + x) != '\0')
	{
		x++;
	}

	ptr = malloc(sizeof(char) * x + 1);

	if (ptr == NULL)
		return (NULL);

	z = 0;
	while (str[z] != '\0')
	{
		ptr[z] = str[z];
		z++;
	}
	ptr[z] = '\0';
	return (ptr);
}

