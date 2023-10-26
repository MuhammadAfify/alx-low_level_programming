#include"main.h"
/**
 * factorial - returns the factorial of a given number.
 *
 * @n: the number
 * Return: 0 if the number less than 1
 * 	1 if the number equal 1
 * 	factorial if the number greater than 1
 */
int factorial(int n)
{
	int fact = 0;

	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	fact = n * factorial(n - 1);
	return (fact);
}
