#include "lists.h"
/**
 * free_list - count the no nodes
 *
 * @head : pointer to the node
 */
void free_list(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
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
			exit(98);
		add->n = (int)head;
		new_node->next = ptr;
		ptr = new_node;
		add = ptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->n)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&ptr);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	free_list(&ptr);
	return (node);
}
