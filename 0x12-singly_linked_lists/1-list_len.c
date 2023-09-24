#include "lists.h"
/**
 * list_len - number of elements in a linked
 *
 * @h : linkedlist
 * Return: return number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t elem;

	while (h)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
