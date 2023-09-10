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
	unsigned int len = n, size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size] != '\0')
		len++;

	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);

	while (s1[size] != '\0')
	{
		result[len] = s1[size];
		len++;
		size++;
	}
	while (s2[size] && size < n)
	{
		result[len] = s2[size];
		len++;
		size++;
	}
	return (result);
}
