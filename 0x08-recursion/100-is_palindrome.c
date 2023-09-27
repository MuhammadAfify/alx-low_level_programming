#include "main.h"
/**
 * _strlen - the length of a string
 *
 * @str: string
 * Return: length of a string.
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}
/**
 * comparator - compares each character of the string
 *
 * @str: string
 * @num1: smallest iterator
 * @num2: biggest iterator
 * Return: the number.
 */
int comparator(char *str, int num1, int num2)
{
	if (*(str + num1) == *(str + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		return (0 + comparator(str, num1 + 1, num2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - check if a string is a palindrome
 *
 * @s: string
 * Return: 1 if s is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
