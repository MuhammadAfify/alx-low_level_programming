#include "main.h"
/**
 * _memset - the function change the defined places
 *
 * @s : the pointer that starting from
 * @b : the char that will replace
 * @n : the number of bytes
 * Return: return the value of char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n >0)
	{
		s[i] = b;
	}
	return (b);
}
