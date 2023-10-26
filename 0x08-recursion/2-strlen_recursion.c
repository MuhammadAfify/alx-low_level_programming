#include"main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string
 * Return: return the length.
 */
int _strlen_recursion(char *s)
{
	int len;

	if (s)
	{
		len++;
		len = len +_strlen_recursion(s + 1);
	}
	return (len);
}
