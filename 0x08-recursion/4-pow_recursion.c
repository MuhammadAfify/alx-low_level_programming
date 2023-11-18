#include "main.h"
/**
 * _pow_recursion - value of x raised to the power of y
 *
 * @x : the number
 * @y : the power
 * Return: value after calculation
 */
int _pow_recursion(int x, int y)
{
	int res;

	res = x;
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	res = res * _pow_recursion(x, y - 1);
	return (res);
}
