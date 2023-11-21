#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 *
 * @head : pointers to head
 * @index : index where delete the node
 * Return: return the address
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy_node;
	unsigned int node;

	copy_node = *head;
	if (copy_node == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy_node);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (copy_node->next == NULL)
			return (-1);
		copy_node = copy_node->next;
	}
	temp = copy_node->next;
	copy_node->next = temp->next;
	free(temp);
	return (1);
}
