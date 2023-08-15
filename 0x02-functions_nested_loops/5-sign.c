#include "main.h"
/**
 * print_sign - checks the sign of the number
 * @n: the number to check
 * Return: 1 if n is print_sign, 0 if n is zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == '0')
{
	_putchar('0');
	return (0);
}
else if (n < 0)
{
	_putchar('-');
}
return (-1);
}
