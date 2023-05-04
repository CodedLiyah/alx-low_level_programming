#include "lists.h"

/**
 * listint_len - print number of elements in the list.
 * @h: singly linked list
 * Return: returns no. of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int r;

	r = 0;

	while (h != NULL)
	{
		h = h->next;
		r++;

	}
	return (r);
}
