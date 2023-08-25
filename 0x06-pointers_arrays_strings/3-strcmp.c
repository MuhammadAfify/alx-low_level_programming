#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1 : first string
 * @s2 : second srting
 * Return: return the result
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while (s1 != '\0' && s2 != '\0')
	{
		if (s1 != s2)
		{
			result = s1 - s2;
		}
		s1++;
		s2++
	}
	return (result);
}
