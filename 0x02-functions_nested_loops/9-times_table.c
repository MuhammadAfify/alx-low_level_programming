#include "main.h"
/**
 * times_table - prints the 9 times table
 * , starting with 0
 */
void times_table(void)
{
	int s, c, r;

	for (c = 0 ; c < 10 ; c++)
	{
		for (r = 0 ; r < 10 ; r++)
		{
		s = c * r;
		if (s == 0)
		{
			_putchar(s + '0');
		}
		if (s < 10 && s != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(s + '0');
		}
		else if (s >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((s % 10) + '0');
			_putchar((s / 10) + '0');
		}
		}
		_putchar('\n');
	}
}
