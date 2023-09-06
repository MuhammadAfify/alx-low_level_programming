#include "main.h"
#include <stdlib.h>
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

	if (s1 == 0)
		s1 = '\0';
	if (s2 == 0)
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
			str[i] = s1[i];
		else
			str[i] = s2[i - size1];
	}
	str[i] = '\0';
	return (str);
}