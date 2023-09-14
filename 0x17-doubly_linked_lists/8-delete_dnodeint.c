#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head list pointer
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	size_t len;

	if (head && *head)
	{
		curr = *head;
		for (len = 0; curr; len++, curr = curr->next)
		{
			;
		}
		if (((index + 1) <= len))
		{
			curr = *head;
			for (len = 0; (len < index) && curr; len++, curr = curr->next)
			{
				;
			}
			if (curr->prev)
			{
				curr->prev->next = curr->next;
			}
			else
			{
				*head = curr->next;
			}
			if (curr->next)
			{
				curr->next->prev = curr->prev;
			}
			free(curr);
			return (1);
		}
	}
	return (-1);
}
