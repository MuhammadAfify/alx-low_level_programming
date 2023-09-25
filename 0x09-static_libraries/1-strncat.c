#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest : the destination after concatenation.
 * @src : the source of the strings.
 * @n : n bytes from src.
 * Return: return the character after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x])
	{
		x++;
	}
	while (y < n && src[y])
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x + n + 1] = '\0';
	return (dest);
}
