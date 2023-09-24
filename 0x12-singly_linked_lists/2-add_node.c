#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 *
 * @head : pointer to head of linkedlist
 * @str : string to be added
 * Return: address for the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *data;
	int l;

	struct list_s *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (data == NULL)
	{
		free(data);
		return (NULL);
	}
	l = 0;
	while (str[l])
		l++;

	new_node->str = data;
	new_node->len = l;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
