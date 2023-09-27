#include "main.h"
/**
 * divide_available - check if the num is divisible
 *
 * @num : num to check
 * @div : divisor
 * Return: 0 if divisible, -1 if not.
 */
int divide_available(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (divide_available(num, div + 1));
}
/**
 * is_prime_number - check the prime num
 *
 * @n : num to check
 * Return: return 0 if not, 1 if is prime.
 */
int is_prime_number(int n)
{
	int division = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divide_available(n, division));
}
