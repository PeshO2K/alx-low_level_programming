#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head pointer
 * Return: # of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t nodes;

    for (nodes = 0; h; nodes++, h = h->next)
    {
        printf("%d\n", h->n);
    }

    return (nodes);
}
