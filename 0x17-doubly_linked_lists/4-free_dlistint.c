#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head pointer
*/
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
