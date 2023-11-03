#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes
 * @new_size: the new size, in bytes
 * Return: return the ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
