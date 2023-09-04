#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy of the string given
 *
 * @str : the string that'll be copying
 * Return: the value of the string
 */
char *_strdup(char *str)
{
	int len = 0;
	char *A;

	while (*(str + 1))
		len++;
	if (str == ('\0'))
		return ('\0');
	A = malloc(l * sizeof(char) + 1);
	if (A == 0)
	{
		return (0);
	}
	for (int i = 0; i <= len; i++)
		*(A + i) = *(str + i);
	return (A);
}
