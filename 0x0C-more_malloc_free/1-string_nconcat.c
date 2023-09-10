#include "main.h"
/**
 * string_nconcat - concatenates two strings
 *
 * @s1 : 1st string
 * @s2 : 2nd string
 * @n : no. bytes
 * Return: return the string after concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n < size2)
		size2 = n;

	result = malloc(sizeof(char) * (size1 + size2 + 1));
	if (result == 0)
		return (0);

	for (i = 0; i < size1; i++)
		result[i] = s1[i];

	for (i = 0, j = size1; i < size2; j++, i++)
		result[j] = s2[i];

	result[j] = '\0';
	return (result);
}
