#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 *
 * @head : pointers to head
 * Returns: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last, *new_head;

	if (head == NULL || *head == NULL)
		return (NULL);
	last = NULL;
	while ((*head)->next != NULL)
	{
		new_head = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = new_head;
	}
	(*head)->next = last;
	return (*head);
}
