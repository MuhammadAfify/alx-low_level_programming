#include <string.h>
#include "lists.h"
/**
 * add_node_end - add node to the end
 *
 * @head : pointer of head linkedlist
 * @str : string to be added
 * Return: return the address of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *data;
	int len;
	struct list_s *end;

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
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new_node;
	}
	return (*head);
}
