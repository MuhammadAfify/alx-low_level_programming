#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 *
 * @min: minimum number
 * @max: maximum number
 * Return: return the new array.
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
	{
		array[i] = min;
	}
	return (array);
}
