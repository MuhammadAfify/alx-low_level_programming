#include "main.h"
/**
 * pow_opt - find the natuaral square
 *
 * @x : the number
 * @y : iterator
 * Return: square root.
 */
int pow_opt(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (0 + pow_opt(x, y + 1));
}
/**
 * _sqrt_recursion - natural square root of a number
 *
 * @n : the number
 * Return: natural root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (pow_opt(n, 2));
}
