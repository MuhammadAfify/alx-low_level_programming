#include "main.h"
/**
 * str_concat - concatenates two strings
 *
 * @s1 : 1st string
 * @s2 : 2nd string
 * Return: the string after concatenation.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i;
	char *str;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	str = malloc((size1 + size2) * sizeof(char) + 1);
	if (str == 0)
		return (0);
	for (i = 0; i <= (size1 + size2); i++)
	{
		if (size1 < i)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
