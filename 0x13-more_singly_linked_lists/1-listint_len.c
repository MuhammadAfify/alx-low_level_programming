#include "lists.h"
/**
 * listint_len - get the number of elements
 *
 * @h : pointer to head
 * Return: return the no elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}
	return (element);
}
