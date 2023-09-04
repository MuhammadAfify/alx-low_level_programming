#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create a array object
 *
 * @size : the size of array
 * @c : the character of the beginning
 * Return: return the value of array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size <= 0)
		return (0);
	A = malloc(size * sizeof(char));
	if (s == 0)
		return(0);
	for (i = 0; i < size; i++)
	{
		*(A + i) = c;
	}
	*(A + i) = '\0';
	return (A);
}
