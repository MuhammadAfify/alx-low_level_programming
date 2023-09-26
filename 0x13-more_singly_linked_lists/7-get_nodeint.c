#include "lists.h"
/**
 * get_nodeint_at_index - define the place of the node
 *
 * @head : pointers to head
 * @index : index of the node to locate
 * Return: the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current;

	for (current = 0; current < index; current++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
