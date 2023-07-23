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
		printf("[%d] %s\n",(h->str == NULL)?0:strlen(h->str),(h->str == NULL)?h->str:"(nil)");
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
