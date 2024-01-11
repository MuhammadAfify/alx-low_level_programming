#include "lists.h"
/**
 * dlistint_len - count number of elements
 *
 * @h: pointer to node
 * Return: return number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
