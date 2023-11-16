#include "lists.h"
/**
 * add_node - add a node at the beginning
 *
 * @head : pointer to head of linkedlist
 * @str : string to be added
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *data;
	int len;
	struct list_s *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	data = strdup(str);
	if (data == NULL)
	{
		free(data);
		return (NULL);
	}
	len = 0;
	while (str[len])
		len++;
	new_node->str = data;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
