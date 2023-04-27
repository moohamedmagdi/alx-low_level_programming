#include <stdlib.h>
#include "lists.h"

/**
 * add_node - func of two arg
 * @head: poi linked list
 * @str: str poi
 *
 * Return: addr
 */

list_t *add_node(list_t **head, const char *str)
{
	int co = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = _strdup(str);
	while (str[co] != '\0')
		co++;
	temp->len = co;
	temp->next = *head;
	*head = temp;
	return (temp);
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

