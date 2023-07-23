#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is added.
 * @n: integer element.
 *
 * Return: the address of the new node,
 * or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	/*listint_t *after;*/
	listint_t *cursor, *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	if (*head)
	{
		cursor = *head;
		count = 0;

		while (count < idx - 1 && cursor)
		{
			cursor = cursor->next;
			/*printf("\tcount: %u\n", count);*/
			count++;
		}

		new_node->next = cursor->next;

		cursor->next = new_node;
		return (new_node);

	}

	return (NULL);
}
