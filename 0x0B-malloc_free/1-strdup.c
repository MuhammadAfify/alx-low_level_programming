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
	int len, i;
	char *A;

	if (str == NULL)
		return (0);

	len = 0;
	while (str[len] != '\0')
		len++;

	A = malloc(len * sizeof(char) + 1);

	if (A == 0)
		return (0);

	for (i = 0; i <= len; i++)
	{
		A[i] = str[i];
	}
	return (A);
}