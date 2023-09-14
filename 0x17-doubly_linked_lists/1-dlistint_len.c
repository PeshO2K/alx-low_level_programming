#include "lists.h"
/** returns the number of elements in a linked dlistint_t list
 * @h: head pointer
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++, h = h->next)
	{
		;
	}
	return (nodes);
}
