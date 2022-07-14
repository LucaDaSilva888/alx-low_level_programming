#include "lists.h"

/**
 * list_length - returns the number of elements in a linked list_t list.
 * @h: singly linked list
 * Return:  number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
