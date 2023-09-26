#include "lists.h"
/**
 * sum_listint - sum of all the data
 *
 * @head : pointers to head
 * Return: return the sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
