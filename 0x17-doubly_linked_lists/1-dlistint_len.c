#include "lists.h"
/**
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}