#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 *
 * @head: pointer to head
 * @index: the index of the node
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while(index != 0)
	{
		if(head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
