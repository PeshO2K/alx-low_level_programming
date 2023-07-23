#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor)
	{
		count++;
		cursor = cursor->next;
	}
	return (count);
}

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cursor, *del_node;
	unsigned int count, len = listint_len(*head);

	if (len != 0 && index < len && head)
	{
		count = 0;
		cursor = *head;

		if (index != 0)
		{
			while (cursor && count < index - 1)
			{
				cursor = cursor->next;
				count++;
			}

			del_node = cursor->next;
			cursor->next = del_node->next;
			free(del_node);
		}
		else
		{
			*head = cursor->next;
			free(cursor);
		}

		return (1);
	}
	return (-1);
}
