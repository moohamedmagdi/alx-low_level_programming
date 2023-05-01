#include "lists.h"

/**
  * add_nodeint - add new nodes to the list
  * @head: current place in the list
  * @n: int to add to the list
  * Return: pointer to current position in list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n;

	n = *head;
	n = malloc(sizeof(listint_t));
	if (n == NULL)
		return (NULL);
	n->n = n;
	n->next = *head;
	*head = n;
	return (*head);
}
