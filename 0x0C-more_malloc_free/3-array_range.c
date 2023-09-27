#include "main.h"
/**
 * array_range - creates an array of integers
 *
 * @min : minimum num
 * @max : maximum number
 * Return: the address of array.
 */
int *array_range(int min, int max)
{
	int *new_array;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min +1;
	new_array = malloc(sizeof(int) * size);
	if (new_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_array[i] = min++;
	return (new_array);
}
