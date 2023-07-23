#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: list
 *
 * Return: the number of nodes
 */
/*
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
*#include "lists.h" /* other header files included in lists.h*/

/**
 * print_listint - prints all elements of a list
 * @h: list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		count += 1;
		h = h->next;
	}
	return (count);
}
