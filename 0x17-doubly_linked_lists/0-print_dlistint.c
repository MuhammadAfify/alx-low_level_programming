#include "lists.h"

/**
 * print_dlistint - print the data of linked list
 *
 * @h: pointer to the node
 * Return: return the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
