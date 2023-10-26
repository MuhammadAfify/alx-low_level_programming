#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s : the string that will be printed
 */
void _puts_recursion(char *s)
{
	if (s == 0)
		return('\n');
	_putchar(*s);
	return _puts_recursion(s + 1);
}
