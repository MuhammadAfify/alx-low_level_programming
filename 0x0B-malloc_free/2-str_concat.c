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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	arr = malloc((size1 + size2) * sizeof(char) + 1);
	if (arr == 0)
		return (0);
	arr = s1;
	for (i = 0; s2[i] != 0 ; size1++, i++)
	{
		arr[size1] = s2[i];
	}
	arr[i] = '\0';
	return (arr);
}
