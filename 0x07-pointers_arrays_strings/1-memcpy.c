#include "main.h"
/**
 * _memcpy - copies memory area
 *  * @dest : the destination memory
 * @src : the source of memory
 * @n : the number of bytes that will be copied
 * Return: return the value of destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
