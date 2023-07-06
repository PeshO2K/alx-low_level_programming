#include "lists.h"

/**
*free_listint - frees a linked list
*@head: head of the list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *cursor;

	while (head)
	{
		cursor = head;
		free(cursor);
		head = head->next;
	}
}
