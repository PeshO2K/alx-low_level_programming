#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: h pointer
 * @idx: index
 * @n: integer data
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *curr, *new = NULL;
    size_t len;

    if (h)
    {
        curr = *h;
        for(len = 0; curr; len++, curr = curr->next)
        {
            ;
        }
        if ((idx + 1) <= len)
        {
            new = (idx == 0) ? add_dnodeint(h, n) : ((idx + 1) == len) ? add_dnodeint_end(h, n) : new;
            if (!new)
            {
                new = malloc(sizeof(dlistint_t));
                if (new)
                {
                    curr = *h;
                    for (len = 0; (len < idx) && curr; len++, curr = curr->next)
                    {
                        ;
                    }
                    new->n = n;
                    new->next = curr;
                    new->prev = curr->prev;
                    curr->prev->next = new;
                    curr->prev = new;                    
                }

            }
        }
    }
    return (new);
}
