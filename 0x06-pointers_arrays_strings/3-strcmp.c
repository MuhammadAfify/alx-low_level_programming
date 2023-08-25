#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1 : first string
 * @s2 : second srting
 * Return: return the result
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, result = 0, comp;

	while (s1[x])
	{
		x++;
	}
	while (s2[y])
	{
		y++;
	}
	if (x <= y)
	{
		comp = x;
	}
	else
	{
		comp = y;
	}
	while (z <= comp)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			result = s1[z] - s2[z];
			break;
		}
		z++;
	}
	return (result);
}
