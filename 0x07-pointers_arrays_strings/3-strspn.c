#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s : the main phrase
 * @accept : the word will be searched
 * Return: return the length.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			if (s[i] != accept[j])
			{
				return (len);
			}
		}
	}
	return (len);
}
