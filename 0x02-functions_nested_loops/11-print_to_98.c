#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * , followed by a new line
 * @n: the number to begin with it
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n ; i <= 98 ; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	else if (n > 98)
		for (i = n ; i >= 98 ; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar (n);
}
