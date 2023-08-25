#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest : the destination after copying
 * @src : the source of the strings.
 * @n : n bytes from src
 * Return: return the character after copying
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[y])
	{
		y++;
	}
	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
