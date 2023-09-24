#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
 * struct list_s - single linkedlist
 * @str: string
 * @len: length of string
 * @next: pointers for next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /*LIST_H*/
