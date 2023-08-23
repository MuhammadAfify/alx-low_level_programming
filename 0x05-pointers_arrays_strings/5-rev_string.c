#include "main.h"
/**
 * rev_string - reverse the string
 *
 * @s : the cahracter that will reversed
 */
void rev_string(char *s)
{
	int c, k, i;
	char *a, temp;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}
	for (k = 1 ; k < c ; k++)
	{
		a++;
	}
	for (i = 0; i < (c / 2) ; i++)
	{
		temp = s[i];
		s[i] = *a;
		*a = temp;
		a--;
	}
}
