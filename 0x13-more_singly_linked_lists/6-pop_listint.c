#include "lists.h"
/**
 * pop_listint - delete the head of the node
 *
 * @head : pointer of the head
 * Return: return the head node
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

	free(temp);
	return (new_head);
}
