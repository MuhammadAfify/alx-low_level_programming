#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s : the main character
 * @accept : the searched character
 * Return: return the character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
		}
	}
	return ('\0');
}
