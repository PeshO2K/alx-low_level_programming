#include "lists.h"

/**
*pop_listint - deletes starting node of a linked list
*@head: start of list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	listint_t *popped_node;
	int node_data;

	if (*head)
	{
		popped_node = *head;
		node_data = popped_node->n;
		

		*head = (*head)->next;
		free(popped_node);
		return (node_data);
	}
	return (0);
}
