#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head pointer
 * @n: integer data
 * Return: address of new element or null
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head)
		{
			(*head)->prev = new_node;
		}
		*head = new_node;
	}
	return (new_node);
}
