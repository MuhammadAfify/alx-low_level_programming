#include "lists.h"
/**
 * sum_dlistint - sum the data of linked list.
 *
 * @head: pointer to head
 * Return: The sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
