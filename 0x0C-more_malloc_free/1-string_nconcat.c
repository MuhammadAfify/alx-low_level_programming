#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: no. bytes
 * Return: return the result after concatenate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1 = 0, size2 = 0, i;
	int noByte = n;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 != NULL)
		size1++;
	while (s2 != NULL)
		size2++;
	if (noByte >= size2)
	{
		noByte = size2;
		result = malloc(sizeof(char) * (size1 + size2 +1));
	}
	else
		result = malloc(sizeof(char) * (size1 + noByte +1));
	if (result == 0)
		return (0);
	for (i = 0; i < (size1 + size2); i++)
	{
		if (i < size1)
			result[i] = s1[i];
		else
			result[i] = s2[i];
	}
	result[i] = '\0';
	return (result);
}
