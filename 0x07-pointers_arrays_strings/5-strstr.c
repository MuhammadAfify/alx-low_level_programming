#include "main.h"
/**
 * _strstr  - locates a substring
 *
 * @haystack : the main character
 * @needle : the character that subtring
 * Return: return the needle.
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack != '\0')
	{
		*s1 = haystack;
		*s2 = needle;
		while (*needle != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
