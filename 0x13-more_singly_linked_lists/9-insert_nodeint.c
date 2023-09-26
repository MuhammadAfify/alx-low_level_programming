#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head : pointers to head
 * @idx : index where put the new node
 * @n : new number
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *copy_node;
	unsigned int node;

	copy_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = copy_node;
		*head = new_node;
		return (new_node);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy_node == NULL || copy_node->next == NULL)
			return (NULL);
		copy_node = copy_node->next;
	}
	new_node->next = copy_node->next;
	copy_node->next = new_node;
	return (new_node);
}
