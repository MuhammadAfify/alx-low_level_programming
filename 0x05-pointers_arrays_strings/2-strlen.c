#include "main.h"
/**
 * _strlen - the function that get the length of char
 * @s : the char that will get the length
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
