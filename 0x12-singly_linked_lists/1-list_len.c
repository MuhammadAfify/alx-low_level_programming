#include "lists.h"
/**
 * list_len - no. elements in linked list
 *
 * @h : linkedlist
 * Return: no. elements
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
