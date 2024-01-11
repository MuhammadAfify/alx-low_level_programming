#include "lists.h"
/**
 * free_dlistint - free linked list
 *
 * @head: pointers to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
