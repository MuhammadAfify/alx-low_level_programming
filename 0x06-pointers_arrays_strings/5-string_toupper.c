#include "main.h"
/**
 * string_toupper - make lower case letter to upper
 *
 * @lower : the string
 * Return: the upper string.
 */
char *string_toupper(char *lower)
{
	int x = 0;

	while (lower[x])
	{
		if (lower[x] >= 97 && lower[x] <= 122)
		{
			lower[x] -= 32;
		}
		x++
	}

	return (lower);
}
