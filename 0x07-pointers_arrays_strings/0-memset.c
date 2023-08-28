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
	char *p = s;
	unsigned int i = 0;

	while (n > i)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
