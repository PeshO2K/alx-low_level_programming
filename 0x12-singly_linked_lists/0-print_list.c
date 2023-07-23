#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: linked list to be printed
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count;

	node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		node_count += 1;
		h = h->next;
	}
	return (node_count);
}
