#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: head pointer;
 * Returns: sum of all elements
*/
int sum_dlistint(dlistint_t *head)
{
    int n_sum = 0;
    for (; head; head = head->next)
    {
        n_sum += head->n;
    }
    return (n_sum);
}
