#include "main.h"
/**
 * print_rev - reverse the string
 *
 * @s : the string
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[0] != '\0')
	{
		c++;
	}
	for (c -= 1 ; c >= 0 ; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
