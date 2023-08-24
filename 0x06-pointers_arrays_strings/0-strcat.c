#include "main.h"
/**
 * _strcat - function to concatenate two strings.
 *
 * @dest : the destination after concatenation.
 * @src : the source of the strings.
 * Return: return the character after concatenation
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
