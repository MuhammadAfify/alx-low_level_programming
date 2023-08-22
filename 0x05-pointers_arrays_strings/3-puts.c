#include "main.h"
/**
 * _puts - print the phrase
 *
 * @str : the pointer that point the phrase
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
