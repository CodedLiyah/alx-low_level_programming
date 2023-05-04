#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: singly linked list
 *
 * Return: prints elements of a list
 */
size_t print_listint(const listint_t *h)
{
	int r;

	r = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		r++;
	}
	return (r);
}
