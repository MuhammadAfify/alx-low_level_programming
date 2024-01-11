#include "lists.h"
/**
 * dlistint_len - count number of elements
 *
 * @h: pointer to node
 * Return: return number of nodes
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
