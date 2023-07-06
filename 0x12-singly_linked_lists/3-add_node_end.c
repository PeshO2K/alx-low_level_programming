#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to head element
 * @str: string
 *
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tail = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}

	return (new_node);
}
