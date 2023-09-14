#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head pointer
 * @index: index of the node, starting from 0
 * Return: Null if node is nonexistant
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    size_t idx;
    for (idx = 0; (idx < index) && head; idx++, head = head->next)
    {
        ;
    }
    return (head);
}
