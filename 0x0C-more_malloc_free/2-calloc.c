#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: array of element
 * @size: size if element
 * Return: return the address of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *new_array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new_array = malloc(nmemb * size);
	if (new_array == NULL)
		return (NULL);
	for (i = 0; i < (nmemb + size); i++)
		new_array[i] = 0;
	return (new_array);
}
