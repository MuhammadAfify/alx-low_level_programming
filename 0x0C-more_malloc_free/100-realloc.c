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
	char *s, *ptr_copy = NULL;
	int i;

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
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = (char *)ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		s[i] = ptr_copy[i];
	free(ptr);
	return (s);
}
