#include "lists.h"
/**
 * free_list - Frees a list
 * @head: The list to be freed
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
