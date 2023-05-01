#include "lists.h"

/**
  * add_nodeint - add new nodes to the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neo;

	neo = *head;
	neo = malloc(sizeof(listint_t));
	if (neo == NULL)
		return (NULL);
	neo->n = n;
	neo->next = *head;
	*head = neo;
	return (*head);
}
