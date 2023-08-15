#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n : the number that get from it the last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -(n % 10);
	_putchar (n);
	return (n);
}
