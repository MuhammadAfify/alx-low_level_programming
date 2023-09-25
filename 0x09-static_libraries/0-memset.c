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

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
