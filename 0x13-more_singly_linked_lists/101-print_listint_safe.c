#include "lists.h"
/**
 * free_list - count the no nodes
 *
 * @head : pointer to the node
 */
void free_list(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head : pointer to the node
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listint_t *ptr, *new_node, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			exit (98);
		new_node->n = head;
		new_node->next = ptr;
		ptr = new_node;
		add = ptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->n)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	free_listp(&ptr);
	return (node);
}
