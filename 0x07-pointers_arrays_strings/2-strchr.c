#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s : the pointers for char
 * @c : the character that's wanted
 * Return: return the character
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (0);
	}
	else
		return ('\0');
}
