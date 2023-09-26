#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head : pointer for head
 * Return: The address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	tort = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tort == hare)
		{
			tort = head;
			while (tort != hare)
			{
				tort = tort->next;
				hare = hare->next;
			}
			return (tort);
		}
		tort = tort->next;
		hare = (hare->next)->next;
	}
	return (NULL);
}
