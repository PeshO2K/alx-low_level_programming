#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: linked list to be printed
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x;
	
	x = 0;

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
		x++;
		h = h->next;
	}
	return (x);
}
