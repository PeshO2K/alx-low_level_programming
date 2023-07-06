#include "lists.h"
/**
 * free_list - Frees a list
 * @head: The list to be freed
 */
void free_list(list_t *head)
{
	list_t *updated;

	while (head)
	{
		updated = head;
		head = head->next;
		free(updated->str);
		free(updated)
	}
}
