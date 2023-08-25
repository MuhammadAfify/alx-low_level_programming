#include "main.h"
/**
 * cap_string - capitalize the strings
 *
 * @strg : the string that will be capitalize
 * Return: return the string after edit
 */
char *cap_string(char *strg)
{
	int a = 0, i;
	int carr = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (strg[a])
	{
		for (i = 0 ; i < carr ; i++)
		{
			if ((a == 0 || strg[a - 1] == spc[i]) && (strg[a] >= 97 && strg[a] <= 122))
			{
				strg[a] -= 32;
			}
		}
		a++;
	}
	return (strg);
}
