#include "search_algos.h"
/**
 * jump_search - performs jump search
 *
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 * Return: the index found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t m = sqrt(size);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += m;
	}

	m = i - m;
	printf("Value found between indexes [%lu] and [%lu]\n", m, i);
	i = i >= size ? size - 1 : i;
	while (m <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] == value)
			return (m);
		m++;
	}
	return (-1);
}
