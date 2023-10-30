#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: the first character
 * Return: the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc((sizeof(char) * (size)));

	if (arr == NULL)
		return ('\0');
	if (size <= 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
