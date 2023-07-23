#include "lists.h"

/**
*free_listint2 - frees a linked list
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
	if (head)
	{
		free_listint22(*head);
		free(head);
	}

	head = NULL;
}
