#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: return the array
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i;
	char *arr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[size1] != 0)
		size1++;
	while (s2[size2] != 0)
		size2++;
	arr = malloc(((size1 + size2) * sizeof(char) + 1));
	if (arr == 0)
		return ('\0');
	for (i = 0; i <= (size1 + size2); i++)
	{
		if (size1 < i)
			arr[i] = s1[i];
		else
			arr[i] = s2[i - size1];
	}
	return (arr);
}
