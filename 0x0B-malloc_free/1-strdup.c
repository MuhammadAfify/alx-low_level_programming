#include "main.h"
#include <stdlib.h>
/**
 * _strdup - pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string will be copied
 * Return: the new array
 */
char *_strdup(char *str)
{
	int i, len;
	char *arr;

	len = 0;
	while (str[len] != 0)
		len++;
	arr = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (NULL);
	if (arr == NULL)
		return ('\0');
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
