 #include "lists.h"
 /**
	* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
	* @head: head pointer
	* @n: integer data
	* Return: the address of the new element, or NULL if it failed
	*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
		dlistint_t *new;
		dlistint_t *curr = *head;

		if (head)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
			{
				return(new);
			}
			for (; curr && curr->next; curr = curr->next)
			{
				;
			}
			new->n = n;
			new->next = NULL;
			new->prev = curr;

			if (*head)
			{
				curr->next = new;
			}
			else
			{
				*head = new;
			}
		}
		return (new);
}
