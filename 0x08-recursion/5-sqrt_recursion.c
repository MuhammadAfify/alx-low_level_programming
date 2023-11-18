#include "main.h"
/**
 * square_find - find the natuaral square
 *
 * @x : the number
 * @y : iterator
 * Return: square root
 */
int square_find(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (0 + square_find(x, y + 1));
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
	return (square_find(n , 2));
}
