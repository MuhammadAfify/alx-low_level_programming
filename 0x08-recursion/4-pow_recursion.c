#include "main.h"
/**
 * _pow_recursion - value of x raised to the power of y
 *
 * @x : the number
 * @y : the power
 * Return: the value after calculation.
 */
int _pow_recursion(int x, int y)
{
	int result;

	result = x;
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result = result * _pow_recursion(x, y - 1);
	return (result);
}
