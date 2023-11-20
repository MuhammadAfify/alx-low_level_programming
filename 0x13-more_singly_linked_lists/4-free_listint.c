#include "lists.h"
/**
 * free_listint - free linked list
 *
 * @head: pointers to head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = (head)->next;
		free(head);
		head = temp;
	}
	head = NULL;
}
