#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
