#include "lists.h"
/**
 * free_listint2 - free linked list
 *
 * @head: pointer to pointer to head
 */
void free_listint2(listint_t **head)
{
	litsint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
