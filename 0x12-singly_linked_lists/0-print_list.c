#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: list to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%u] %s\n",(h->str == NULL)? 0:h->len, (h->str == NULL)? "(nil)":h->str);
		/*
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}*/
		n++;
		h = h->next;
	}
	return (n);
}
