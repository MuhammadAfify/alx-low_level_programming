#include "lists.h"
/**
 * print_listint - prints all the elements
 *
 * @h: pointer to head
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
        size_t node;

        for (node = 0; h != NULL; node++)
        {
                printf("%d\n", h->n);
                h = h->next;
        }
        return (node);
}
