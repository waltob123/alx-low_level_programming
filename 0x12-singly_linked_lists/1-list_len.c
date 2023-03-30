#include "lists.h"

/**
 * list_len -number of elements
 * @h: fisrt node
 * Return: length of linked list.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
