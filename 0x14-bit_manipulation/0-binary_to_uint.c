#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1;
	int len;

	if (!b)
		return (0);
	len = 0;
	while (b[len])
		len++;
	for (len -= 1; len <= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num = num + (b[len] - '0') * mul;
		mul = mul * 2;
	}
	return (num);
}
