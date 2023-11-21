#include "lists.h"
/**
 * pop_listint - delete head of node
 *
 * @head: pointers of head
 * Return: head of node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int new_head;

	if (*head == NULL)
		return (0);
	temp = *head;
	new_head = (*head)->n;
	*head = (*head)->next;
	free (temp);
	return (new_head);
}
