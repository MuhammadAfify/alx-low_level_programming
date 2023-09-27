#include "main.h"
/**
 * _calloc - allocate memory for array
 *
 * @nmemb : number of elements
 * @size : size of array
 * Return: pointer of allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == NULL || size == NULL)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
