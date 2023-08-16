#include "main.h"
/**
 * times_table - prints the 9 times table
 * , starting with 0
 */
void times_table(void)
{
	int c, r, s;

	for (c = 0; c <= 9; c++)
	{
		_putchar('0');

		for (r = 1; r <= 9; r++)
		{
			_putchar(',');
			_putchar(' ');

			s = c * r;

			if (s <= 9)
				_putchar(' ');
			else
				_putchar((s / 10) + '0');

			_putchar((s % 10) + '0');
		}
		_putchar('\n');
	}
}
