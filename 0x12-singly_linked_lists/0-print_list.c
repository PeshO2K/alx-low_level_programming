#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: linked list to be printed
 *
 * Return: the number of nodes
 */
/*
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%u] ", (h->str == NULL) ? 0 : h->len);
		printf("%s\n", (h->str == NULL) ? "(nil)" : h->str);
		h = h->next;
		n++;
	}
	return (n);
}
*/
size_t print_list(const list_t *h)
{
	unsigned int n = 0;
	const list_t *tmp_node = h;

	while (tmp_node)
	{
		if (tmp_node->str)
			printf("[%u] %s\n", tmp_node->len, tmp_node->str);
		else
			printf("[0] (nil)\n");
		tmp_node = tmp_node->next;
		n++;
	}
	return (n);
}
